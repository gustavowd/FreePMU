/*
 * Arquivo de tarefas de Flavio Lori Grando(2016) em sua PMU proposta com codigo adaptado ao
 * sistema embarcado STM32F746G
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <math.h>
#include <time.h>
#include <string.h>
#include "main.h"
#include "arm_const_structs.h"
#include "cmsis_os.h"
#include "stm32f7xx_hal.h"
#include "stm32f769i_discovery.h"
#include "serial.h"
#include "frameDataQ.h"
#include "GUI/gui.h"
#include "print_server.h"

#if (NOMINAL_FREQ == 50)
#define MCLOCK_FREQ 200000000
#endif
#if (NOMINAL_FREQ == 60)
#define MCLOCK_FREQ 210000000
#endif

#define numero_pontos 256
#define invN					(float)1/numero_pontos		//1/N

extern osMessageQId SerialGPSq;

extern TIM_HandleTypeDef 			 htim1;
#if (SIMULATED_GPS == 1)
extern TIM_HandleTypeDef 			htim12;
#endif
#ifndef PPS_30_HZ
extern TIM_HandleTypeDef			 htim8;
#endif

extern UART_HandleTypeDef 			 huart6;

volatile uint8_t newSOC = 0;
#ifdef PPS_30_HZ
volatile int frame_cnt = 0;
volatile int frame_cnt_3 = 0;
#endif

unsigned short adcBuffer[numero_pontos*3] __attribute__((section(".ADCBUF")));
#if (OVERSAMPLING  == 1)
unsigned short adcBufferMedia[numero_pontos*3*4*2] __attribute__((section(".ADCBUFMED")));
#endif


extern void MX_USART6_UART_Init(void);
extern unsigned int Get_ADC_Calib (void);


//				LEITURA DOS DADOS DO GPS

int cnt=0; // contador dos separadores (virgulas)
unsigned int date_limit, tow_limit, wno_limit, size; //delimitadores das informa�oes

char serialGPS_SET = 0;
#if (SIMULATED_GPS == 1)
char *dado_gps = "GPRMC,190430,A,4812.3038,S,07330.7690,W,3.7,3.8,090210,13.7,E,D*26\n";
#else
char dado_gps[100];	//buffer da mensagem
#endif
//char *dado_gps = "PUBX,04,073731.00,091202,1138.00,119,15D,1930035,-2660.664,43,*3C\n";
//char *dado_gps = "GPRMC,190430,A,4812.3038,S,07330.7690,W,3.7,3.8,090210,13.7,E,D*26\n";
char ID;			//Proprietary message identifier
char UTC_WNO[5]; 	//UTC week number
char UTC_TOW[7];	//UTC Time of Week
unsigned long week_num, sec_of_week;
unsigned long SOC = 1617793084;
unsigned long num;


///////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////
//				ESTIMA��O DOS DADOS DE INTERESSE
//
// Fasores trifasicos, frequencia e rocof
unsigned n=0, t_inicial=2;
unsigned int send_serial=0;
unsigned int i=1;
int j=0;
volatile unsigned int n_amostras=256;

unsigned int k=0;
unsigned int flag=0;
unsigned int r,s,t; //rr, ss, tt;

#ifdef USAR_DFT
//Tabela da DFT
float teta, seno[numero_pontos], cosseno[numero_pontos];
#endif
//aplicacao do fator de calibracao
float FC;
float FasesAC[numero_pontos*3];
float FasesAC_mod_R[numero_pontos], FasesAC_mod_S[numero_pontos], FasesAC_mod_T[numero_pontos];
float FasesAC_ReIm_R[numero_pontos*2], FasesAC_ReIm_S[numero_pontos*2], FasesAC_ReIm_T[numero_pontos*2];
#ifdef USAR_DFT
//Aplicacao da DFT
float modulor,modulos,modulot,faser,fases,faset,somaMr,somaMs,somaMt,somaFr,somaFs,somaFt;
//Fasor em coordenadas retangulares
float Mr,Ms,Mt,Fr,Fs,Ft;
#endif
//Fasor em coordenadas polares
float Mag_R,Mag_S,Mag_T,Fase_R,Fase_S,Fase_T;
//float CalibHarmonicas_mag[numero_pontos];
//float CalibHarmonicas_phase[10];
float Harmonics_gain[3] = {HARM_NORM_GAIN_R, HARM_NORM_GAIN_S, HARM_NORM_GAIN_T};
float harmonics_R_mag[15];
float harmonics_R_phase[15];
float harmonics_S_mag[15];
float harmonics_S_phase[15];
float harmonics_T_mag[15];
float harmonics_T_phase[15];

float THD_R, THD_S, THD_T = 0.0;
//Frequencia e rocof
#if (NOMINAL_FREQ == 60)
float f0=60; // Freq nominal
int fps=30; //Fasor por segundo - metade da freq. nominal neste trabalho
#endif
#if (NOMINAL_FREQ == 50)
float f0=50; // Freq nominal
int fps=25; //Fasor por segundo - metade da freq. nominal neste trabalho
#endif
float desvio_faseR, desvio_faseS, desvio_faseT, freq_R, freq_S, freq_T, Freq, ROCOF;
float Fase_R_ant, Fase_S_ant, Fase_T_ant, Freq_ant;
float desvio_ang_esp;
float tolerancia = 10;
//media movel do desvio de angulo
float vetor_desvioR[10], vetor_desvioS[10], vetor_desvioT[10];
float soma_r, soma_s, soma_t;
unsigned int d=0;
//Correção da taxa de amostragem
float  dif, vetor_freq[10], media_freq, soma_freq, media_freq_2;
float vetor_rocof[10], media_rocof, soma_rocof;
unsigned int  f=0, g=0, contador = 0;

#ifdef PLATAFORMA_DE_TESTES
//Transmissao via serial
float buffer[68];
#endif

//Definicoes para correcao das medidas
float mag, faseR_x_mag, faseS_x_mag, faseT_x_mag, faseR_x_freq, faseS_x_freq, faseT_x_freq;
float MagR_x_mag, MagS_x_mag, MagT_x_mag, MagR_x_freq;

//Fasores finais
volatile float Mag_R_final,Mag_S_final,Mag_T_final,Fase_R_final,Fase_S_final,Fase_T_final;
float Freq_final;

//Outros
float x, y, z, w;// a=0;
unsigned int Freq_int;

char timestampstr[25]; // Timestamp string buffer.

//////////////////////////////////////////
//           PARA SER CONFIGURADO  !!!!!!!!
// Faction of Second
unsigned long FracSec = 0x00000000;  // 40 000 us
// Time base
unsigned long Time_base = 0x000F4240;   // 1 000 000 us

///////////////////////////////////////////

union {
	float pf;
	unsigned char byte[4];
}convert_float_to_char;


// Referencia uma estrutura para o sem�foro que sincroniza a transmiss�o pela porta serial
osSemaphoreId  pmuSem_id;
extern osSemaphoreId syncSem_id;
extern volatile unsigned char data_flag;
extern char isSyncCreated;

volatile int trigcount = 0;

void MX_ADC1_Init(void);
void MX_ADC2_Init(void);
void MX_ADC3_Init(void);

extern ADC_HandleTypeDef hadc1;
extern ADC_HandleTypeDef hadc2;
extern ADC_HandleTypeDef hadc3;

float LWordSwap(float float_data){
	uint32_t tmp = 0;
	uint32_t data = (uint32_t)float_data;
	tmp = (data & 0xFF000000) >> 24;
	tmp += (data & 0xFF0000) >> 8;
	tmp += (data & 0xFF00) << 8;
	tmp += (data & 0xFF) << 24;
	return (float)tmp;
}

void PMU_Task(void *argument)
{
	xMessageBuffer = xMessageBufferCreate(768);
	UARTInit();
	/////////////////////// DEFINIÇÕES INICIAIS
	pmuSem_id = osSemaphoreNew(1U, 0U, NULL);
	//osSemaphoreWait(pmuSem_id, osWaitForever);

	#ifdef USAR_DFT
	// Tabela da DFT
	teta=2*M_PI/n_amostras;

	for(k=0;k<n_amostras;k++){
		seno[k]=sin(k*teta);
		cosseno[k]=cos(k*teta);
	}
	#endif

	//Carrega valores iniciais
	desvio_ang_esp = 0;  //desvio de ângulo esperado
	tolerancia = 6.5;    //tolerancia do desvio esperado
	Freq_ant = f0;

	// carrega vetores de media móvel
	for(i=0;i<10;i++){
		vetor_freq[i]=f0;
		vetor_rocof[i]=0;
	}

	  MX_ADC1_Init();
	  MX_ADC2_Init();
	  MX_ADC3_Init();

	  HAL_ADC_Start(&hadc3);
	  HAL_ADC_Start(&hadc2);
	  #if (OVERSAMPLING  == 1)
	  HAL_ADCEx_MultiModeStart_DMA(&hadc1, (uint32_t*)adcBufferMedia, 768*4*2);
      #else
	  HAL_ADCEx_MultiModeStart_DMA(&hadc1, (uint32_t*)adcBuffer, 768);
	  #endif

	  newSOC = 0;
	#if (SIMULATED_GPS == 1)
	  HAL_TIM_PWM_Start(&htim12, TIM_CHANNEL_1);
	#endif
	//////////////////// INICIO DO PROCESSO DE ESTIMACAO
	while(1){
		// Espera completar as 768 amostras
		osSemaphoreAcquire(pmuSem_id, osWaitForever);


		// Calcula o fator de calibração
		//BSP_LED_Toggle(LED1);
		FC=1.21/(Get_ADC_Calib());

		// Calcula a média a cada 8 pontos para gerar os 256 de cada fase
#if (OVERSAMPLING  == 1)
		r=0;
		s=1;
		t=2;
		int idx = 0;
		int k = 0;
		for(j=0;j<(n_amostras);j++){
			adcBuffer[r] = adcBufferMedia[idx++];
			adcBuffer[s] = adcBufferMedia[idx++];
			adcBuffer[t] = adcBufferMedia[idx++];
			for(k=0;k<7;k++){
				adcBuffer[r] += adcBufferMedia[idx++];
				adcBuffer[s] += adcBufferMedia[idx++];
				adcBuffer[t] += adcBufferMedia[idx++];
			}
			adcBuffer[r] = adcBuffer[r] >> 3;
			adcBuffer[s] = adcBuffer[s] >> 3;
			adcBuffer[t] = adcBuffer[t] >> 3;
			r +=3;
			s +=3;
			t +=3;
		}
#endif

		// Aplica o fator de calibracao e carrega novo vetor (liberando o buffer)
		for(j=0;j<(n_amostras*3);j++){
		    FasesAC[j]=adcBuffer[j]*FC;//(3.0/4096);
		}

		send_serial = 0;

		r=0;
		s=1;
		t=2;

		#ifdef USAR_DFT
		somaMr=0;
		somaMs=0;
		somaMt=0;

		somaFr=0;
		somaFs=0;
		somaFt=0;
		#endif

		//Aplicacao da DFT
		int k2 = 0;
		for (k=0;k<n_amostras;k++){
			//##############################
			// Para FFT
			FasesAC_ReIm_R[k2]=FasesAC[r];
			FasesAC_ReIm_S[k2]=FasesAC[s];
			FasesAC_ReIm_T[k2]=FasesAC[t];
			FasesAC_ReIm_R[k2+1]=0;
			FasesAC_ReIm_S[k2+1]=0;
			FasesAC_ReIm_T[k2+1]=0;

			k2 += 2;
			//##############################

			#ifdef USAR_DFT
			modulor = FasesAC[r]*cosseno[k];
			modulos = FasesAC[s]*cosseno[k];
			modulot = FasesAC[t]*cosseno[k];

			faser = FasesAC[r]*seno[k];
			fases = FasesAC[s]*seno[k];
			faset = FasesAC[t]*seno[k];

			somaMr += modulor;
			somaMs += modulos;
			somaMt += modulot;

			somaFr += faser;
			somaFs += fases;
			somaFt += faset;
			#endif

			r +=3;
			s +=3;
			t +=3;
		}

		//##############################
		// Para FFT
		arm_cfft_f32(&arm_cfft_sR_f32_len256,FasesAC_ReIm_R,0,1);
		arm_cmplx_mag_f32(FasesAC_ReIm_R,FasesAC_mod_R,256);

		arm_cfft_f32(&arm_cfft_sR_f32_len256,FasesAC_ReIm_S,0,1);
		arm_cmplx_mag_f32(FasesAC_ReIm_S,FasesAC_mod_S,256);

		arm_cfft_f32(&arm_cfft_sR_f32_len256,FasesAC_ReIm_T,0,1);
		arm_cmplx_mag_f32(FasesAC_ReIm_T,FasesAC_mod_T,256);
		//##############################

		//##############################
		// Cálculo de harmônicas da fase AC

		Mag_R = FasesAC_mod_R[1];
		Mag_S = FasesAC_mod_S[1];
		Mag_T = FasesAC_mod_T[1];

		// Ajuste do ganho de tensão (normalizado para a tensão 127V ou 220V)
		arm_scale_f32(FasesAC_mod_R,Harmonics_gain[0]*invN, FasesAC_mod_R,numero_pontos);
		arm_scale_f32(FasesAC_mod_S,Harmonics_gain[1]*invN, FasesAC_mod_S,numero_pontos);
		arm_scale_f32(FasesAC_mod_T,Harmonics_gain[2]*invN, FasesAC_mod_T,numero_pontos);

		// Se precisar a amplitude de cada harmônica com um valor diferente
		//arm_mult_f32(FasesAC_mod_R, CalibHarmonicas_mag, FasesAC_mod_R,numero_pontos);

		// Calculo de THD e fase das harmônicas
		float tmp_THD_R = 0.0;
		float tmp_THD_S = 0.0;
		float tmp_THD_T = 0.0;
		for(k=0;k<15;k++){
			harmonics_R_mag[k] = FasesAC_mod_R[k+2];
			// Calcula fase em radianos das harmônicas da fase R
			harmonics_R_phase[k] = atan2(FasesAC_ReIm_R[2*k+5],FasesAC_ReIm_R[2*k+4]);//*180/M_PI;
			tmp_THD_R += harmonics_R_mag[k]*harmonics_R_mag[k];

			harmonics_S_mag[k] = FasesAC_mod_S[k+2];
			// Calcula fase em radianos das harmônicas da fase S
			harmonics_S_phase[k] = atan2(FasesAC_ReIm_S[2*k+5],FasesAC_ReIm_S[2*k+4]);//*180/M_PI;
			tmp_THD_S += harmonics_S_mag[k]*harmonics_S_mag[k];

			harmonics_T_mag[k] = FasesAC_mod_T[k+2];
			// Calcula fase em radianos das harmônicas da fase T
			harmonics_T_phase[k] = atan2(FasesAC_ReIm_T[2*k+5],FasesAC_ReIm_T[2*k+4]);//*180/M_PI;
			tmp_THD_T += harmonics_T_mag[k]*harmonics_T_mag[k];
			// calibração de fase das harmônicas ???
			//harmonics_phase[k] = harmonics_phase[k] - CalibHarmonicas_phase[k];
		}
		arm_sqrt_f32(tmp_THD_R, &THD_R);
		THD_R = (THD_R / FasesAC_mod_R[1])*100;
		arm_sqrt_f32(tmp_THD_S, &THD_S);
		THD_S = (THD_S / FasesAC_mod_S[1])*100;
		arm_sqrt_f32(tmp_THD_T, &THD_T);
		THD_T = (THD_T / FasesAC_mod_T[1])*100;

		// Ajuste das harmônicas para a tensão nominal
	#if (NOMINAL_VOLTAGE == 127)
		float voltage_gain = 89.802561211*PEAK_OR_RMS;
	#endif
	#if (NOMINAL_VOLTAGE == 220)
		float voltage_gain = 155.563491861*PEAK_OR_RMS;
	#endif
		arm_scale_f32(harmonics_R_mag,voltage_gain, harmonics_R_mag,15);
		arm_scale_f32(harmonics_S_mag,voltage_gain, harmonics_S_mag,15);
		arm_scale_f32(harmonics_T_mag,voltage_gain, harmonics_T_mag,15);
		//##############################

		#ifndef USAR_DFT
		Mag_R = PEAK_OR_RMS*invN*Mag_R;
		Fase_R = atan2(FasesAC_ReIm_R[3],FasesAC_ReIm_R[2])*180/M_PI;	//Fase R da harmonica fundamental

		Mag_S = PEAK_OR_RMS*invN*Mag_S;
		Fase_S=atan2(FasesAC_ReIm_S[3],FasesAC_ReIm_S[2])*180/M_PI;	//Fase S da harmonica fundamental

		Mag_T = PEAK_OR_RMS*invN*Mag_T;
		Fase_T=atan2(FasesAC_ReIm_T[3],FasesAC_ReIm_T[2])*180/M_PI;	//Fase T da harmonica fundamental
		#endif

		#ifdef USAR_DFT
		//Fasor em coordenadas retangulares
		Mr=somaMr*2/n_amostras;
		Ms=somaMs*2/n_amostras;
		Mt=somaMt*2/n_amostras;

		Fr=somaFr*2/n_amostras;
		Fs=somaFs*2/n_amostras;
		Ft=somaFt*2/n_amostras;

		//Fasor em coordenadas polares
		Mag_R = (sqrt((Mr*Mr)+(Fr*Fr)))/sqrt(2);
		Mag_S = (sqrt((Ms*Ms)+(Fs*Fs)))/sqrt(2);
		Mag_T = (sqrt((Mt*Mt)+(Ft*Ft)))/sqrt(2);

		Fase_R = (atan2(-Fr,Mr)*180/M_PI);
		Fase_S = (atan2(-Fs,Ms)*180/M_PI);
		Fase_T = (atan2(-Ft,Mt)*180/M_PI);
		#endif

		//Desvio de fase (para estimacao de frequencia)
		desvio_faseR = (Fase_R-Fase_R_ant);
		desvio_faseS = (Fase_S-Fase_S_ant);
		desvio_faseT = (Fase_T-Fase_T_ant);

		Fase_R_ant = Fase_R;
		Fase_S_ant = Fase_S;
		Fase_T_ant = Fase_T;


		// Correção do phase shift
		//Desabilitar essa correção para os testes de frequência em estado estacionário!!
/*
		if(desvio_faseR > (desvio_ang_esp+tolerancia)){
			desvio_faseR = desvio_ang_esp;
		}
		if(desvio_faseR < (desvio_ang_esp-tolerancia)){
			desvio_faseR = desvio_ang_esp;
		}

		if(desvio_faseS > (desvio_ang_esp+tolerancia)){
			desvio_faseS = desvio_ang_esp;
		}
		if(desvio_faseS < (desvio_ang_esp-tolerancia)){
			desvio_faseS = desvio_ang_esp;
		}

		if(desvio_faseT > (desvio_ang_esp+tolerancia)){
			desvio_faseT = desvio_ang_esp;
		}
		if(desvio_faseT < (desvio_ang_esp-tolerancia)){
			desvio_faseT = desvio_ang_esp;
		}
*/


		// Correcao da regiao de 180 graus para o desvio de fase
		if(desvio_faseR>270){
			desvio_faseR = desvio_faseR-360;
		}
		if(desvio_faseR<-270){
			desvio_faseR = desvio_faseR+360;
		}
		if(desvio_faseS>270){
			desvio_faseS = desvio_faseS-360;
		}
		if(desvio_faseS<-270){
			desvio_faseS = desvio_faseS+360;
		}
		if(desvio_faseT>270){
			desvio_faseT = desvio_faseT-360;
		}
		if(desvio_faseT<-270){
			desvio_faseT = desvio_faseT+360;
		}


		//FREQUENCIA E ROCOF FINAL (sem correcoes)
		//Calculo da freq para 30 pulsos e 3 fases

		freq_R = f0 + (desvio_faseR*fps)/360.0;
		freq_S = f0 + (desvio_faseS*fps)/360.0;
		freq_T = f0 + (desvio_faseT*fps)/360.0;

		Freq = (freq_R+freq_S+freq_T)/3.0;

		if(Freq > (NOMINAL_FREQ+5)){
			Freq = (NOMINAL_FREQ+5);
		}else if(Freq < (NOMINAL_FREQ-5)){
			Freq = (NOMINAL_FREQ-5);
		}

		media_freq_2 = (Freq + Freq_ant)/2.0;

		//Desvio de ângulo esperado (para correção do phase shift)
		desvio_ang_esp = 360*(Freq-f0)/fps;


		ROCOF = (Freq - Freq_ant)*fps;

		Freq_ant = Freq;

		//media movel no valor final do rocof
		n=3;
		vetor_rocof[g] = ROCOF;
		g++;
		for(i=0;i<n;i++){
		    soma_rocof = soma_rocof + vetor_rocof[i];
		    media_rocof = soma_rocof/n;
		}
		soma_rocof = 0;
		if(g==n){
		    g=0;
		}


		// Media movel no valor final da frequencia
		vetor_freq[f] = Freq;
		f++;
		for(i=0;i<2;i++){
		    soma_freq = soma_freq + vetor_freq[i];
		    media_freq = soma_freq/2.0;
		}
		soma_freq = 0;
		if(f==2){
		    f=0;
		}

		Freq_final = media_freq; //+media_rocof/fps;


		// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! TESTES SEM SINAL
		//media_freq = f0;  /////////////////// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
		//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

/*		if(a<25){
			TIM8->ARR = (float)180000000/((50)*n_amostras);
			a++;
		}

*/

		//AJUSTE DA TAXA DE AMOSTRAGEM
#ifdef CORRIGE_RESIDUAL
	#if (OVERSAMPLING  == 1)
		volatile float tmpARR = (float)MCLOCK_FREQ/((media_freq)*n_amostras*4*2);
	#else
		volatile float tmpARR = (float)MCLOCK_FREQ/((media_freq)*n_amostras);
	#endif
		volatile uint32_t tmpARRfix = (uint32_t)tmpARR;
		volatile float residual = tmpARR - (float)tmpARRfix;
#endif

		// O valor correto é o calculado - 1
		/* No entanto, se o valor depois da virgula for maior que 0.5
		   considera-se que o valor não precisa ser diminuido de 1 */
		#ifdef CORRIGE_RESIDUAL
			#ifdef PPS_30_HZ
			if (residual > 0.5){
				htim1.Instance->ARR = tmpARRfix;
			}else{
				htim1.Instance->ARR = tmpARRfix - 1;
			}
			#else
			if (residual > 0.5){
				htim8.Instance->ARR = tmpARRfix;
			}else{
				htim8.Instance->ARR = tmpARRfix - 1;
			}
			#endif
		#endif

		/*********************************************************/
		//APLICAÇÃO DAS CORREÇÕES (em magnitude e fase)

		//MAGNITUDE- ajuste da magnitude
		// Y-data = Magnitude reference - X-data = Magnitude measured (não em p.u.)

		MagR_x_mag = FIT_MAG_GAIN_A_R + FIT_MAG_GAIN_B_R*Mag_R + FIT_MAG_GAIN_C_R*Mag_R*Mag_R - FIT_MAG_GAIN_D_R*Mag_R*Mag_R*Mag_R;
		MagS_x_mag = FIT_MAG_GAIN_A_S + FIT_MAG_GAIN_B_S*Mag_S + FIT_MAG_GAIN_C_S*Mag_S*Mag_S - FIT_MAG_GAIN_D_S*Mag_S*Mag_S*Mag_S;
		MagT_x_mag = FIT_MAG_GAIN_A_T + FIT_MAG_GAIN_B_T*Mag_T + FIT_MAG_GAIN_C_T*Mag_T*Mag_T - FIT_MAG_GAIN_D_T*Mag_T*Mag_T*Mag_T;

		//FASE
		//correcao de fase em funcao da magnitude
		// Y-data = Phase deviation - X-data = Magnitude measured (não em p.u.)

		faseR_x_mag = Fase_R - FIT_PHASE_GAIN_A_R + FIT_PHASE_GAIN_B_R*MagR_x_mag - FIT_PHASE_GAIN_C_R*MagR_x_mag*MagR_x_mag;
	#ifdef FIT_PHASE_GAIN_D_S
		faseS_x_mag = Fase_S - FIT_PHASE_GAIN_A_S + FIT_PHASE_GAIN_B_S*MagS_x_mag - FIT_PHASE_GAIN_C_S*MagS_x_mag*MagS_x_mag + FIT_PHASE_GAIN_D_S*MagS_x_mag*MagS_x_mag*MagS_x_mag;
	#else
		faseS_x_mag = Fase_S - FIT_PHASE_GAIN_A_S + FIT_PHASE_GAIN_B_S*MagS_x_mag - FIT_PHASE_GAIN_C_S*MagS_x_mag*MagS_x_mag;
	#endif
	#ifdef FIT_PHASE_GAIN_D_T
		faseT_x_mag = Fase_T - FIT_PHASE_GAIN_A_T + FIT_PHASE_GAIN_B_T*MagT_x_mag - FIT_PHASE_GAIN_C_T*MagT_x_mag*MagT_x_mag + FIT_PHASE_GAIN_D_T*MagT_x_mag*MagT_x_mag*MagT_x_mag;
	#else
		faseT_x_mag = Fase_T - FIT_PHASE_GAIN_A_T + FIT_PHASE_GAIN_B_T*MagT_x_mag - FIT_PHASE_GAIN_C_T*MagT_x_mag*MagT_x_mag;
	#endif

		// FREQUENCIA
		//correcao de fase em funcao da frequencia
		// Y-data = phase deviation - X-data = frequency reference
		faseR_x_freq = FIT_FREQ_GAIN_A_R + FIT_FREQ_GAIN_B_R*Freq_final;
		faseS_x_freq = FIT_FREQ_GAIN_A_S + FIT_FREQ_GAIN_B_S*Freq_final;
		faseT_x_freq = FIT_FREQ_GAIN_A_T + FIT_FREQ_GAIN_B_T*Freq_final;

		// Calcula magnitude final
		// Ajustes do ganho de magnitude:
		// Sensor AZUL:
		Mag_R_final = MagR_x_mag * MAG_GAIN_R; //Mag_R;
		Mag_S_final = MagS_x_mag * MAG_GAIN_S;
		Mag_T_final = MagT_x_mag * MAG_GAIN_T; //MagT_x_mag;


		//Calcula fase final (aplica as correcoes anteriores)
		Fase_R_final = faseR_x_mag + faseR_x_freq;
		Fase_S_final = faseS_x_mag + faseS_x_freq;
		Fase_T_final = faseT_x_mag + faseT_x_freq;

		// Correcao da regiao de 180 graus para a fase final
		if(Fase_R_final > 180.0){
			Fase_R_final = (Fase_R_final-360);
		}
		if(Fase_R_final <= -180.0){
			Fase_R_final = (Fase_R_final+360);
		}
		if(Fase_S_final>180.0){
			Fase_S_final = (Fase_S_final-360);
		}
		if(Fase_S_final<= -180.0){
			Fase_S_final = (Fase_S_final+360);
		}
		if(Fase_T_final>180.0){
			Fase_T_final = (Fase_T_final-360);
		}
		if(Fase_T_final<= -180.0){
			Fase_T_final = (Fase_T_final+360);
		}


	#ifdef PLATAFORMA_DE_TESTES
		// DADOS DA TRANSMISSAO (via serial pro PC)
		UARTPutChar(STDOUT,'$');
		idx = 0;
		//buffer[idx++] = SOC;
		buffer[idx++] = Mag_R_final;
		buffer[idx++] = Fase_R_final;
		buffer[idx++] = Mag_S_final;
		buffer[idx++] = Fase_S_final;
		buffer[idx++] = Mag_T_final;
		buffer[idx++] = Fase_T_final;

		for (int j = 0; j<10; j++){
			buffer[idx++] = harmonics_R_mag[j];
			buffer[idx++] = harmonics_R_phase[j];
		}

		for (int j = 0; j<10; j++){
			buffer[idx++] = harmonics_S_mag[j];
			buffer[idx++] = harmonics_S_phase[j];
		}

		for (int j = 0; j<10; j++){
			buffer[idx++] = harmonics_T_mag[j];
			buffer[idx++] = harmonics_T_phase[j];
		}

		buffer[idx++] = Freq_final;
		buffer[idx++] = media_rocof;

		// Envia os dados pela serial
		uint8_t *dados = (uint8_t*)&buffer;
		UARTPutString(STDOUT,dados,(idx*4));
		UARTPutString(STDOUT,(uint8_t*)"\n\r", 2);
	#endif

	#ifdef PPS_30_HZ
		if (frame_cnt){
			FracSec += FRACAO_DE_SEGUNDO;
			if (frame_cnt >= (NOMINAL_FREQ/2)){
				taskENTER_CRITICAL();
				newSOC = 0;
				frame_cnt = 0;
				frame_cnt_3 = 0;
				FracSec = FRACAO_DE_SEGUNDO_INIT;
				taskEXIT_CRITICAL();
			}
		}

		frame_cnt++;
	#if (NOMINAL_FREQ == 60)
		// Arredonda o framesec a cada 3 fasores (framesec 100, 200, 300, ..., 900)
		if (FracSec != 0){
			frame_cnt_3++;
			if (frame_cnt_3 == 3){
				frame_cnt_3 = 0;
				FracSec++;
			}
		}
	#endif
	#endif
		BSP_LED_Toggle(LED1);
		if((isSyncCreated == 1) && (data_flag)){
				cnt = 0;
				osSemaphoreRelease(syncSem_id);

		}

	}
}




extern xSemaphoreHandle sUART;
char teste;
volatile uint32_t gps_status = 0;
void gps_set_status(uint32_t gps_state);

void GPS_Task(void *argument)
{
	uint32_t gps_protocol = 0;
	vTaskDelay(100);
	while(1){
	    volatile unsigned char *p;

		p = (unsigned char*)&dado_gps;

	#if (SIMULATED_GPS != 1)
		/*Liga o GPS*/
		HAL_GPIO_WritePin(GPIOJ, GPIO_PIN_1, GPIO_PIN_SET);

		do{
			UARTGetCharTimeout(SERIAL, (uint8_t*)p, osWaitForever);
		  }while(*p != '$');

		p--;

		do{
		   p++;
		   UARTGetCharTimeout(SERIAL, (uint8_t*)p, osWaitForever);
		}while(*p != '\n');
	#endif

		uint8_t date_calc = 0;
		uint8_t valid_data = 0;
		uint8_t hora_calc = 0;
		uint8_t substring=1;
		struct tm t;

	#if (SIMULATED_GPS == 1)
		vTaskDelay(500);
		//UARTPutString(dado_gps, 67);
		//UARTPutString("\r\n", 2);
	#endif

		char* str = strtok(dado_gps, ",");

		/*Verifica se chegou informações de Data e Hora*/
		if (strcmp(str, "GPRMC\0") != 0){
			substring = 10; /*Se a mensagem recebida não for correta*/
		}

		if (substring < 10){
			// Foi identificada uma mensagem válida
			if (gps_status == 0){
				gps_status = 1;
				gps_protocol = 1;
				gps_set_status(gps_status);
				gps_protocol_set_status(gps_protocol);
			}
			str+=6;

			while (substring <=9){
				if (substring == 1 && *str != ','){
					t.tm_hour = 10*( *str++ - 48);
					t.tm_hour += (*str++ - 48);
					t.tm_min = 10*(*str++ - 48);
					t.tm_min += (*str++ - 48);
					t.tm_sec = 10*(*str++ - 48);
					t.tm_sec += (*str++ - 48);
					hora_calc = 1;
				}//else if (substring ==2 && *str != ','){
                    //Não precisa de dados válidos para data e hora
					//if (*str++ == 'A')
					//	valid_data=1;
				//}
				else if (substring == 9 && *str != ','){
					t.tm_mday = 10*( *str++ - 48);
					t.tm_mday += ( *str++ - 48);
					t.tm_mon = 10*( *str++ - 48);
					t.tm_mon += ( *str++ - 48) - 1;
					t.tm_year = 2000+10*( *str++ - 48);
					t.tm_year += ( *str++  - 48) - 1900;
					t.tm_isdst = -1;
					date_calc = 1;
					// Detecta dados válidos pelo ano
					if (t.tm_year >= 122){
						valid_data=1;
					}
				}

				while (*str++ != ',');
				substring++;
			}

			/*Verifica se chegou informações de Data e Hora*/
			if (date_calc && hora_calc && valid_data){
				/*segundo secular UNIX time (1 jan 1970)*/
				SOC = (unsigned long) mktime(&t);
				SOC = SOC + TIMEZONE*3600;
				time_t tmp_soc = (time_t)SOC;
				t = *localtime(&tmp_soc);

				/*Novo SOC foi calculado*/
				taskENTER_CRITICAL();
				newSOC = 1;
				frame_cnt = 0;
				frame_cnt_3 = 0;
				FracSec = FRACAO_DE_SEGUNDO_INIT;
				taskEXIT_CRITICAL();

				strftime(timestampstr, sizeof(timestampstr), "%d/%m/%y  %T", &t);

			}
		#if (SIMULATED_GPS == 1)
			vTaskDelay(490);
		#endif
		}else{
			// Procura por mensagem UBX, caso não seja mensagem NMEA GPRMC
			// Determina se a mensagem é UBX,04
			if (strcmp(str, "PUBX\0") == 0){
				// Testa se a mensagem é do tipo 4
				if (dado_gps[6] == '4'){

					if (gps_status == 0){
						gps_status = 1;
						gps_protocol = 2;
						gps_set_status(gps_status);
						gps_protocol_set_status(gps_protocol);
					}

					//Extrai a informação: segundos na semana
					str = strtok(NULL, ",");
					str = strtok(NULL, ",");
					str = strtok(NULL, ",");
					str = strtok(NULL, ",");
					i = 0;
					while(*str){
						if (*str != '.'){
							UTC_TOW[i]=*str++;
							i++;
						}else{
							break;
						}
					}
					UTC_TOW[i] = '\0';

					//Extrai a informação: numero da semana
					i = 0;
					str = strtok(NULL, ",");
					while(*str){
						UTC_WNO[i]=*str++;
						i++;
					}
					UTC_WNO[i] = '\0';

					//Datasheet mentiroso, no  fonte UTC,  GPS! 10 anos de diferença
					week_num = atoi(UTC_WNO);

					sec_of_week = atoi(UTC_TOW);

					//segundo secular UNIX time (since 6 jan 1980)
					SOC = sec_of_week + week_num*604800 + 60*60*24*365*10 + 60*60*24*7;

					/*Novo SOC foi calculado*/
					taskENTER_CRITICAL();
					newSOC = 1;
					frame_cnt = 0;
					frame_cnt_3 = 0;
					FracSec = FRACAO_DE_SEGUNDO_INIT;
					taskEXIT_CRITICAL();
				}
			}
		}
	}
}


//////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
//						DATA FORMATING
//

// IEEE Std C37.118.2 - 2011 - PMU Standard data transfer

// SYNC[1] Second byte
// bit[7] = Reserved
// bits[6,5,4] = Frame Type, bits[3,2,1,0]

#define A_SYNC_AA 0xAA
#define A_SYNC_DATA 0x01
#define A_SYNC_HDR 0x11
#define A_SYNC_CFG1 0x21
#define A_SYNC_CFG2 0x31
#define A_SYNC_CFG3 0x52
#define A_SYNC_CMD 0x41

// IMPLEMENTA��O DO CRC-CCITT
// Baseado na norma

uint16_t CRC_CCITT;

uint16_t ComputeCRC(unsigned char *Message, uint16_t MessLen)
{
	uint16_t crc=0xFFFF;
	uint16_t temp;
	uint16_t quick;
	uint16_t i;

	for(i=0;i<MessLen;i++)
	{
		temp = (crc>>8) ^ Message[i];
		crc <<= 8;
		quick = temp ^ (temp >> 4);
		crc ^= quick;
		quick <<=5;
		crc ^= quick;
		quick <<= 7;
		crc ^= quick;
	}
	return crc;
}


#if (ENABLE_HARMONICS == 1)
unsigned char ucData[832];
#else
unsigned char ucData[128];
#endif
unsigned int PmuID = PMUID;			// Identificacao da PMU


/////////////// FRAME DE DADOS
struct frameDataQueue* qUcData = NULL;
int frame_data(uint16_t *size){
	// Se a fila nao existir, cria-la
	if (qUcData == NULL) {
		qUcData = createFDQueue();
	}

	uint16_t i=0;

	#if (ENABLE_HARMONICS == 1)
	memset((void*)ucData, 0, 320);
	#else
	memset((void*)ucData, 0, 50);
	#endif

	// 1. SYNC = Data Message Sync Byte and Frame Type
	ucData[i++] = A_SYNC_AA;   //0
	ucData[i++] = A_SYNC_DATA; //1

	// 2. FRAMESIZE = Tamanho do frame, incluindo CHK
	#if (ENABLE_HARMONICS == 1)
	ucData[i++] = (unsigned char)0x01;   //2
	ucData[i++] = (unsigned char)0x40;   //3
	#else
	ucData[i++] = (unsigned char)0x00;   //2
	ucData[i++] = (unsigned char)0x32;   //3
	#endif

	// 3. IDCODE = ID da fonte de transmissao
	ucData[i++] = (unsigned char)((PmuID & 0xFF00) >> 8);   //4
	ucData[i++] = (unsigned char)(PmuID & 0x00FF);   //5

	// 4. SOC = Second Of Century = Estampa de tempo, segundo secular
	ucData[i++] = (unsigned char)((SOC & 0xFF000000) >> 24);   //6
	ucData[i++] = (unsigned char)((SOC & 0x00FF0000) >> 16);   //7
	ucData[i++] = (unsigned char)((SOC & 0x0000FF00) >> 8);   //8
	ucData[i++] = (unsigned char)(SOC & 0x000000FF);   //9

	// 5. FRACSEC = Fracao do segundo e qualidade do tempo
	ucData[i++] = (unsigned char)((FracSec & 0xFF000000) >> 24);  //10 - Time quality (secao 6.2.2)
	ucData[i++] = (unsigned char)((FracSec & 0x00FF0000) >> 16);  //11 - fracsec
	ucData[i++] = (unsigned char)((FracSec & 0x0000FF00) >> 8);   //12 - fracsec
	ucData[i++] = (unsigned char)(FracSec & 0x000000FF);		  //13 - fracsec
	#ifndef PPS_30_HZ
	FracSec += FRACAO_DE_SEGUNDO;
	#endif

	// 6. STAT = Flags, a criterio do usuario
	ucData[i++] = 0x00;   //14
	ucData[i++] = 0x00;   //15

	// 7. PHASORS
	// Magnitude primeiro - unidades de engenharia
	float Fase_R_rad, Fase_S_rad, Fase_T_rad ;
	// Fase, depois da magnitude -  em radianos
	Fase_R_rad = Fase_R_final*M_PI/180.0;
	Fase_S_rad = Fase_S_final*M_PI/180.0;
	Fase_T_rad = Fase_T_final*M_PI/180.0;

	convert_float_to_char.pf = Mag_R_final;
	ucData[i++] = convert_float_to_char.byte[3];	//16
	ucData[i++] = convert_float_to_char.byte[2];	//17
	ucData[i++] = convert_float_to_char.byte[1];	//18
	ucData[i++] = convert_float_to_char.byte[0];	//19

	convert_float_to_char.pf = Fase_R_rad;
	ucData[i++] = convert_float_to_char.byte[3];	//20
	ucData[i++] = convert_float_to_char.byte[2];	//21
	ucData[i++] = convert_float_to_char.byte[1];	//22
	ucData[i++] = convert_float_to_char.byte[0];	//23

	convert_float_to_char.pf = Mag_S_final;
	ucData[i++] = convert_float_to_char.byte[3];	//24
	ucData[i++] = convert_float_to_char.byte[2];	//25
	ucData[i++] = convert_float_to_char.byte[1];	//26
	ucData[i++] = convert_float_to_char.byte[0];	//27

	convert_float_to_char.pf = Fase_S_rad;
	ucData[i++] = convert_float_to_char.byte[3];	//28
	ucData[i++] = convert_float_to_char.byte[2];	//29
	ucData[i++] = convert_float_to_char.byte[1];	//30
	ucData[i++] = convert_float_to_char.byte[0];	//31

	convert_float_to_char.pf = Mag_T_final;
	ucData[i++] = convert_float_to_char.byte[3];	//32
	ucData[i++] = convert_float_to_char.byte[2];	//33
	ucData[i++] = convert_float_to_char.byte[1];	//34
	ucData[i++] = convert_float_to_char.byte[0];	//35

	convert_float_to_char.pf = Fase_T_rad;
	ucData[i++] = convert_float_to_char.byte[3];	//36
	ucData[i++] = convert_float_to_char.byte[2];	//37
	ucData[i++] = convert_float_to_char.byte[1];	//38
	ucData[i++] = convert_float_to_char.byte[0];	//39

	// 8. FREQ = Desvio de frequencia do nominal, em mHz
	//Freq_final = (Freq_final - f0)*1000;

	convert_float_to_char.pf = (Freq_final);
	ucData[i++] = convert_float_to_char.byte[3];	//80
	ucData[i++] = convert_float_to_char.byte[2];	//81
	ucData[i++] = convert_float_to_char.byte[1];	//82
	ucData[i++] = convert_float_to_char.byte[0];	//83

	// 9. DFREQ = ROCOF in Hz/s "times 100"
	//ROCOF = ROCOF*100;

	convert_float_to_char.pf = (media_rocof*100);
	ucData[i++] = convert_float_to_char.byte[3];	//84
	ucData[i++] = convert_float_to_char.byte[2];	//85
	ucData[i++] = convert_float_to_char.byte[1];	//86
	ucData[i++] = convert_float_to_char.byte[0];	//87


#if (ENABLE_HARMONICS == 1)
	// Phase R
	// 6. STAT = Flags, a criterio do usuario
	ucData[i++] = 0x00;   //14
	ucData[i++] = 0x00;   //15

	// 7. PHASORS
	for (int j = 0; j<10; j++){
		convert_float_to_char.pf = harmonics_R_mag[j];
		ucData[i++] = convert_float_to_char.byte[3];
		ucData[i++] = convert_float_to_char.byte[2];
		ucData[i++] = convert_float_to_char.byte[1];
		ucData[i++] = convert_float_to_char.byte[0];

		convert_float_to_char.pf = harmonics_R_phase[j];
		ucData[i++] = convert_float_to_char.byte[3];
		ucData[i++] = convert_float_to_char.byte[2];
		ucData[i++] = convert_float_to_char.byte[1];
		ucData[i++] = convert_float_to_char.byte[0];
	}

	// 8. FREQ = Desvio de frequencia do nominal, em mHz
	//Freq_final = (Freq_final - f0)*1000;

	convert_float_to_char.pf = (Freq_final);
	ucData[i++] = convert_float_to_char.byte[3];	//80
	ucData[i++] = convert_float_to_char.byte[2];	//81
	ucData[i++] = convert_float_to_char.byte[1];	//82
	ucData[i++] = convert_float_to_char.byte[0];	//83

	// 9. DFREQ = ROCOF in Hz/s "times 100"
	//ROCOF = ROCOF*100;

	convert_float_to_char.pf = (media_rocof*100);
	ucData[i++] = convert_float_to_char.byte[3];	//84
	ucData[i++] = convert_float_to_char.byte[2];	//85
	ucData[i++] = convert_float_to_char.byte[1];	//86
	ucData[i++] = convert_float_to_char.byte[0];	//87

	// Phase S
	// 6. STAT = Flags, a criterio do usuario
	ucData[i++] = 0x00;   //14
	ucData[i++] = 0x00;   //15

	// 7. PHASORS
	for (int j = 0; j<10; j++){
		convert_float_to_char.pf = harmonics_S_mag[j];
		ucData[i++] = convert_float_to_char.byte[3];
		ucData[i++] = convert_float_to_char.byte[2];
		ucData[i++] = convert_float_to_char.byte[1];
		ucData[i++] = convert_float_to_char.byte[0];

		convert_float_to_char.pf = harmonics_S_phase[j];
		ucData[i++] = convert_float_to_char.byte[3];
		ucData[i++] = convert_float_to_char.byte[2];
		ucData[i++] = convert_float_to_char.byte[1];
		ucData[i++] = convert_float_to_char.byte[0];
	}

	// 8. FREQ = Desvio de frequencia do nominal, em mHz
	//Freq_final = (Freq_final - f0)*1000;

	convert_float_to_char.pf = (Freq_final);
	ucData[i++] = convert_float_to_char.byte[3];	//80
	ucData[i++] = convert_float_to_char.byte[2];	//81
	ucData[i++] = convert_float_to_char.byte[1];	//82
	ucData[i++] = convert_float_to_char.byte[0];	//83

	// 9. DFREQ = ROCOF in Hz/s "times 100"
	//ROCOF = ROCOF*100;

	convert_float_to_char.pf = (media_rocof*100);
	ucData[i++] = convert_float_to_char.byte[3];	//84
	ucData[i++] = convert_float_to_char.byte[2];	//85
	ucData[i++] = convert_float_to_char.byte[1];	//86
	ucData[i++] = convert_float_to_char.byte[0];	//87

	// Phase T
	// 6. STAT = Flags, a criterio do usuario
	ucData[i++] = 0x00;   //14
	ucData[i++] = 0x00;   //15

	// 7. PHASORS
	for (int j = 0; j<10; j++){
		convert_float_to_char.pf = harmonics_T_mag[j];
		ucData[i++] = convert_float_to_char.byte[3];
		ucData[i++] = convert_float_to_char.byte[2];
		ucData[i++] = convert_float_to_char.byte[1];
		ucData[i++] = convert_float_to_char.byte[0];

		convert_float_to_char.pf = harmonics_T_phase[j];
		ucData[i++] = convert_float_to_char.byte[3];
		ucData[i++] = convert_float_to_char.byte[2];
		ucData[i++] = convert_float_to_char.byte[1];
		ucData[i++] = convert_float_to_char.byte[0];
	}

	// 8. FREQ = Desvio de frequencia do nominal, em mHz
	//Freq_final = (Freq_final - f0)*1000;

	convert_float_to_char.pf = (Freq_final);
	ucData[i++] = convert_float_to_char.byte[3];	//80
	ucData[i++] = convert_float_to_char.byte[2];	//81
	ucData[i++] = convert_float_to_char.byte[1];	//82
	ucData[i++] = convert_float_to_char.byte[0];	//83

	// 9. DFREQ = ROCOF in Hz/s "times 100"
	//ROCOF = ROCOF*100;

	convert_float_to_char.pf = (media_rocof*100);
	ucData[i++] = convert_float_to_char.byte[3];	//84
	ucData[i++] = convert_float_to_char.byte[2];	//85
	ucData[i++] = convert_float_to_char.byte[1];	//86
	ucData[i++] = convert_float_to_char.byte[0];	//87
#endif

	// 12. CRC-CCITT = Cyclic Redundancy Codes (CRC)
	CRC_CCITT = ComputeCRC(ucData, i);

	ucData[i++] = (unsigned char)((CRC_CCITT & 0xFF00) >> 8);	//88
	ucData[i++] = (unsigned char)(CRC_CCITT & 0x00FF);			//89
	*size = i;

	//HAL_GPIO_TogglePin(GPIOF, GPIO_PIN_6);

	/*Novo SOC foi calculado*/
	if (newSOC) {
		//Se a fila estiver vazia ...
		if (isQueueEmpty(qUcData)) {
			/*	... Retorna 1, informando o pmu_tcp_server_out
			 *  pra apenas enviar o ucData atual, visto que nao tem
			 	mais dados que este para enviar. */
#if 0
			char tmpbuffer[40];
			sprintf(tmpbuffer, "SOC: %lu - FracSec: %lu", SOC, FracSec);
			//UARTPutString(STDOUT, tmpbuffer,0);
			xMessageBufferSend(xMessageBuffer, tmpbuffer, strlen(tmpbuffer)+1, portMAX_DELAY);
			//UARTPutString(STDOUT, "\n\r",2);
			xMessageBufferSend(xMessageBuffer, "\n\r", 2, portMAX_DELAY);
#endif
			return 1;
		}
		else {
			/*	... coloca o newSOC em todos os elementos da fila
			 *  para serem enviados pelo tcp_server.
			 *
			 *  Lembrando que a funcao changeSOC retorna o numero de elementos
			 *  da fila, por isso se encontra em um return. */
			insertQueueElement(qUcData, ucData, i);
			return changeSOC(qUcData, SOC, i);
		}
	}
	else {   /* Nao ha SOC calculado, guarda na fila e retorna 0, nada para ser enviado*/
		#ifndef PPS_30_HZ		
		if (isQueueEmpty(qUcData)){
			FracSec = 0x00;
			ucData[10] = (unsigned char)((FracSec & 0xFF000000) >> 24);  //10 - Time quality (secao 6.2.2)
			ucData[11] = (unsigned char)((FracSec & 0x00FF0000) >> 16);  //11 - fracsec
			ucData[12] = (unsigned char)((FracSec & 0x0000FF00) >> 8);   //12 - fracsec
			ucData[13] = (unsigned char)(FracSec & 0x000000FF);		  //13 - fracsec
			FracSec += FRACAO_DE_SEGUNDO;
		}
		#endif
		// Proteção contra estouro de memória quando não recebe newSOCs por mais de 1 segundo
		if (qUcData->number_elements < 30){
			insertQueueElement(qUcData, ucData, i);
		}else{
			// Esvazia a fila se chegar a 30 pacotes sem newSOC
			struct frameDataElement* temp = removeQueueElement(qUcData);
			while (temp != NULL) {
				vPortFree(temp);
				temp = removeQueueElement(qUcData);
			}
			//UARTPutString(STDOUT, "Buffer cheio\n\r",14);
			xMessageBufferSend(xMessageBuffer, "Full buffer\n\r", 14, portMAX_DELAY);
		}
		return 0;
	}
}

/////////////// CONFIGURATION FRAME
int frame_config(uint8_t config){
	char CHName[16]; //vetor nome dos canais, frame config

	memset(ucData, 0x00, sizeof(ucData));

	// 1. SYNC = Data Message Sync Byte andFrame Type
	ucData[0] = A_SYNC_AA;
	ucData[1] = config;

	// 2. FRAMESIZE = Frame size, including CHK
	#if (ENABLE_HARMONICS == 1)
	ucData[2] = (unsigned char)0x03;
	ucData[3] = (unsigned char)0x24; //
	#else
	ucData[2] = (unsigned char)0x00;
	ucData[3] = (unsigned char)0x72; //
	#endif

	// 3. IDCODE = ID da fonte de transmissao
	ucData[4] = (unsigned char)((PmuID & 0xFF00) >> 8);
	ucData[5] = (unsigned char)(PmuID & 0x00FF);

	// 4. SOC = Second Of Century = Estampa de tempo, segundo secular
	ucData[6] = (unsigned char)((SOC & 0xFF000000) >> 24);
	ucData[7] = (unsigned char)((SOC & 0x00FF0000) >> 16);
	ucData[8] = (unsigned char)((SOC & 0x0000FF00) >> 8);
	ucData[9] = (unsigned char)(SOC & 0x000000FF);

	// 5. FRACSEC = Fracao do segundo e qualidade do tempo
	ucData[10] = (unsigned char)((FracSec & 0xFF000000) >> 24);  //Time quality (secao 6.2.2)
	ucData[11] = (unsigned char)((FracSec & 0x00FF0000) >> 16);  //fracsec
	ucData[12] = (unsigned char)((FracSec & 0x0000FF00) >> 8);   //fracsec
	ucData[13] = (unsigned char)(FracSec & 0x000000FF);			//fracsec

	// 6. TIME_BASE = Resolucao do FRACSEC
	ucData[14] = (unsigned char)((Time_base & 0xFF000000) >> 24);
	ucData[15] = (unsigned char)((Time_base & 0x00FF0000) >> 16);
	ucData[16] = (unsigned char)((Time_base & 0x0000FF00) >> 8);
	ucData[17] = (unsigned char)(Time_base & 0x000000FF);

	// 7. NUM_PMU = numero de PMUs inclusas no frame de dados
	#if (ENABLE_HARMONICS == 1)
	ucData[18] = 0x00;
	ucData[19] = 0x04;
	#else
	ucData[18] = 0x00;
	ucData[19] = 0x01;
	#endif

	// 8. STN = Nome da estacao
	ucData[20] = 'F';
	ucData[21] = 'r';
	ucData[22] = 'e';
	ucData[23] = 'e';
	ucData[24] = ' ';
	ucData[25] = 'P';
	ucData[26] = 'M';
	ucData[27] = 'U';
	ucData[28] = ' ';
	ucData[29] = 48 + (PmuID/10);
	ucData[30] = 48 + (PmuID%10);
	ucData[31] = ' ';
	ucData[32] = 'R';
	ucData[33] = 'S';
	ucData[34] = 'T';
	ucData[35] = 0x20;

	// 9. IDCODE = uma PMU, nesse caso igual ao campo 3
	ucData[36] = (unsigned char)((PmuID & 0xFF00) >> 8);
	ucData[37] = (unsigned char)(PmuID & 0x00FF);

	// 10. FORMAT = Formato dos dados nos frames de dados
	ucData[38] = 0x00;
	ucData[39] = 0x0F;  // 0111b

	// 11. PHNMR = Numero de fasores
	ucData[40] = 0x00;
	ucData[41] = 0x03;  // 3 fasores

	// 12. ANNMR = Number of Analog Values
	ucData[42] = 0x00;
	ucData[43] = 0x00;  //

	// 13. DGNMR = Number of Digital Status Words
	ucData[44] = 0x00;
	ucData[45] = 0x00;

	// 14. CHNAM = Nome de fasores e canais
	memset(CHName, 0x00, 16);
	strcpy(CHName, "Phase_R");
	memcpy(ucData + 46, CHName, 16);

	memset(CHName, 0x00, 16);
	strcpy(CHName, "Phase_S");
	memcpy(ucData + 62, CHName, 16);

	memset(CHName, 0x00, 16);
	strcpy(CHName, "Phase_T");
	memcpy(ucData + 78, CHName, 16);

	uint16_t i = 94;

	// 15.  PHUNIT = fator de conversao pra canais fasoriais
	// 4 bytes pra cada fasor
	ucData[i++] = 0x00;  // 0 = Voltage, 1 = Current
	ucData[i++] = 0x00;  // ignore
	ucData[i++] = 0x00;  // ignore
	ucData[i++] = 0x00;  // ignore

	ucData[i++] = 0x00;  //
	ucData[i++] = 0x00;  //
    ucData[i++] = 0x00;  //
	ucData[i++] = 0x00;  //

	ucData[i++] = 0x00;
	ucData[i++] = 0x00;
	ucData[i++] = 0x00;  //
	ucData[i++] = 0x00;  //

	// 18. FNOM = Frequencia nominal
	ucData[i++] = 0x00;

	if(f0 == 50){
		ucData[i++] = 0x01; // 1 = 50 Hz
	 }else{
		 ucData[i++] = 0x00; // 0 = 60 Hz
	 }

	// 19. CFGCNT = contador de alteracao da configuracao
	ucData[i++] = 0x00;
	ucData[i++] = 0x00;  //


#if (ENABLE_HARMONICS == 1)
	// Phase R
	unsigned char pmuid_tmp = PmuID;
	pmuid_tmp++;

	// 8. STN = Nome da estacao
	ucData[i++] = 'F';
	ucData[i++] = 'r';
	ucData[i++] = 'e';
	ucData[i++] = 'e';
	ucData[i++] = ' ';
	ucData[i++] = 'P';
	ucData[i++] = 'M';
	ucData[i++] = 'U';
	ucData[i++] = ' ';
	ucData[i++] = 48 + (pmuid_tmp/10);
	ucData[i++] = 48 + (pmuid_tmp%10);
	ucData[i++] = ' ';
	ucData[i++] = 'R';
	ucData[i++] = 'H';
	ucData[i++] = ' ';
	ucData[i++] = ' ';

	// 9. IDCODE = uma PMU, nesse caso igual ao campo 3
	ucData[i++] = (unsigned char)((pmuid_tmp & 0xFF00) >> 8);
	ucData[i++] = (unsigned char)(pmuid_tmp & 0x00FF);

	// 10. FORMAT = Formato dos dados nos frames de dados
	ucData[i++] = 0x00;
	ucData[i++] = 0x0F;  // 0111b

	// 11. PHNMR = Numero de fasores
	ucData[i++] = 0x00;
	ucData[i++] = 0x0A;  // 10 fasores

	// 12. ANNMR = Number of Analog Values
	ucData[i++] = 0x00;
	ucData[i++] = 0x00;  //

	// 13. DGNMR = Number of Digital Status Words
	ucData[i++] = 0x00;
	ucData[i++] = 0x00;

	// 14. CHNAM = Nome de fasores e canais
	for (int j = 2; j<12; j++){
		memset(CHName, 0x00, 16);
		sprintf(CHName, "%d Harmonic R", j);
		memcpy(ucData + i, CHName, 16);
		i += 16;
	}

	// 15.  PHUNIT = fator de conversao pra canais fasoriais
	// 4 bytes pra cada fasor
	for (j = 0; j<10; j++){
		ucData[i++] = 0x00;  // 0 = Voltage, 1 = Current
		ucData[i++] = 0x00;  // ignore
		ucData[i++] = 0x00;  // ignore
		ucData[i++] = 0x00;  // ignore
	}


	// 18. FNOM = Frequencia nominal
	ucData[i++] = 0x00;

	if(f0 == 50){
		ucData[i++] = 0x01; // 1 = 50 Hz
	 }else{
		 ucData[i++] = 0x00; // 0 = 60 Hz
	 }

	// 19. CFGCNT = contador de alteracao da configuracao
	ucData[i++] = 0x00;
	ucData[i++] = 0x00;  //

	// Phase S
	pmuid_tmp++;

	// 8. STN = Nome da estacao
	ucData[i++] = 'F';
	ucData[i++] = 'r';
	ucData[i++] = 'e';
	ucData[i++] = 'e';
	ucData[i++] = ' ';
	ucData[i++] = 'P';
	ucData[i++] = 'M';
	ucData[i++] = 'U';
	ucData[i++] = ' ';
	ucData[i++] = 48 + (pmuid_tmp/10);
	ucData[i++] = 48 + (pmuid_tmp%10);
	ucData[i++] = ' ';
	ucData[i++] = 'S';
	ucData[i++] = 'H';
	ucData[i++] = ' ';
	ucData[i++] = ' ';

	// 9. IDCODE = uma PMU, nesse caso igual ao campo 3
	ucData[i++] = (unsigned char)((pmuid_tmp & 0xFF00) >> 8);
	ucData[i++] = (unsigned char)(pmuid_tmp & 0x00FF);

	// 10. FORMAT = Formato dos dados nos frames de dados
	ucData[i++] = 0x00;
	ucData[i++] = 0x0F;  // 0111b

	// 11. PHNMR = Numero de fasores
	ucData[i++] = 0x00;
	ucData[i++] = 0x0A;  // 10 fasores

	// 12. ANNMR = Number of Analog Values
	ucData[i++] = 0x00;
	ucData[i++] = 0x00;  //

	// 13. DGNMR = Number of Digital Status Words
	ucData[i++] = 0x00;
	ucData[i++] = 0x00;

	// 14. CHNAM = Nome de fasores e canais
	for (int j = 2; j<12; j++){
		memset(CHName, 0x00, 16);
		sprintf(CHName, "%d Harmonic S", j);
		memcpy(ucData + i, CHName, 16);
		i += 16;
	}

	// 15.  PHUNIT = fator de conversao pra canais fasoriais
	// 4 bytes pra cada fasor
	for (j = 0; j<10; j++){
		ucData[i++] = 0x00;  // 0 = Voltage, 1 = Current
		ucData[i++] = 0x00;  // ignore
		ucData[i++] = 0x00;  // ignore
		ucData[i++] = 0x00;  // ignore
	}


	// 18. FNOM = Frequencia nominal
	ucData[i++] = 0x00;

	if(f0 == 50){
		ucData[i++] = 0x01; // 1 = 50 Hz
	 }else{
		 ucData[i++] = 0x00; // 0 = 60 Hz
	 }

	// 19. CFGCNT = contador de alteracao da configuracao
	ucData[i++] = 0x00;
	ucData[i++] = 0x00;  //

	// Phase T
	pmuid_tmp++;

	// 8. STN = Nome da estacao
	ucData[i++] = 'F';
	ucData[i++] = 'r';
	ucData[i++] = 'e';
	ucData[i++] = 'e';
	ucData[i++] = ' ';
	ucData[i++] = 'P';
	ucData[i++] = 'M';
	ucData[i++] = 'U';
	ucData[i++] = ' ';
	ucData[i++] = 48 + (pmuid_tmp/10);
	ucData[i++] = 48 + (pmuid_tmp%10);
	ucData[i++] = ' ';
	ucData[i++] = 'T';
	ucData[i++] = 'H';
	ucData[i++] = ' ';
	ucData[i++] = ' ';

	// 9. IDCODE = uma PMU, nesse caso igual ao campo 3
	ucData[i++] = (unsigned char)((pmuid_tmp & 0xFF00) >> 8);
	ucData[i++] = (unsigned char)(pmuid_tmp & 0x00FF);

	// 10. FORMAT = Formato dos dados nos frames de dados
	ucData[i++] = 0x00;
	ucData[i++] = 0x0F;  // 0111b

	// 11. PHNMR = Numero de fasores
	ucData[i++] = 0x00;
	ucData[i++] = 0x0A;  // 10 fasores

	// 12. ANNMR = Number of Analog Values
	ucData[i++] = 0x00;
	ucData[i++] = 0x00;  //

	// 13. DGNMR = Number of Digital Status Words
	ucData[i++] = 0x00;
	ucData[i++] = 0x00;

	// 14. CHNAM = Nome de fasores e canais
	for (int j = 2; j<12; j++){
		memset(CHName, 0x00, 16);
		sprintf(CHName, "%d Harmonic T", j);
		memcpy(ucData + i, CHName, 16);
		i += 16;
	}

	// 15.  PHUNIT = fator de conversao pra canais fasoriais
	// 4 bytes pra cada fasor
	for (j = 0; j<10; j++){
		ucData[i++] = 0x00;  // 0 = Voltage, 1 = Current
		ucData[i++] = 0x00;  // ignore
		ucData[i++] = 0x00;  // ignore
		ucData[i++] = 0x00;  // ignore
	}


	// 18. FNOM = Frequencia nominal
	ucData[i++] = 0x00;

	if(f0 == 50){
		ucData[i++] = 0x01; // 1 = 50 Hz
	 }else{
		 ucData[i++] = 0x00; // 0 = 60 Hz
	 }

	// 19. CFGCNT = contador de alteracao da configuracao
	ucData[i++] = 0x00;
	ucData[i++] = 0x00;  //
#endif

	// 20. DATA_RATE = Taxa de transmissao de fasores
	ucData[i++] = ((fps & 0xFF00) >> 8);
	ucData[i++] = (fps & 0x00FF);

	//21. CRC-CCITT = Calcula o CRC
	CRC_CCITT = ComputeCRC(ucData, i);

	ucData[i++] = (unsigned char)((CRC_CCITT & 0xFF00) >> 8);
	ucData[i++] = (unsigned char)(CRC_CCITT & 0x00FF);

	return i;
}


///////////////// FRAME DE CABECALHO
int frame_header(void)
{
	// 1. SYNC = Data Message Sync Byte andFrame Type
	ucData[0] = A_SYNC_AA;
	ucData[1] = A_SYNC_HDR;

	// 2. FRAMESIZE = Tamanho do frame, incluindo CHK
	ucData[2] = (unsigned char)0x00;
	ucData[3] = (unsigned char)0x15; // 21 em decimal

	// 3. IDCODE = ID da fonte de transmissao
	ucData[4] = (unsigned char)((PmuID & 0xFF00) >> 8);
	ucData[5] = (unsigned char)(PmuID & 0x00FF);

	// 4. SOC = Second Of Century = Estampa de tempo, segundo secular
	ucData[6] = (unsigned char)((SOC & 0xFF000000) >> 24);
	ucData[7] = (unsigned char)((SOC & 0x00FF0000) >> 16);
	ucData[8] = (unsigned char)((SOC & 0x0000FF00) >> 8);
	ucData[9] = (unsigned char)(SOC & 0x000000FF);

	// 5. FRACSEC = Fracao do segundo e qualidade do tempo
	ucData[10] = (unsigned char)((FracSec & 0xFF000000) >> 24);  //Time quality (secao 6.2.2)
	ucData[11] = (unsigned char)((FracSec & 0x00FF0000) >> 16);  //fracsec
	ucData[12] = (unsigned char)((FracSec & 0x0000FF00) >> 8);   //fracsec
	ucData[13] = (unsigned char)(FracSec & 0x000000FF);			//fracsec

	// 6. DATA = qualquer coisa
	ucData[14] = (unsigned char)(1);
	ucData[15] = (unsigned char)(2);
	ucData[16] = (unsigned char)(3);
	ucData[17] = (unsigned char)(4);

	//21. CRC-CCITT = Calcula o CRC

	CRC_CCITT = ComputeCRC(ucData, 19);

	ucData[18] = (unsigned char)((CRC_CCITT & 0xFF00) >> 8);
	ucData[19] = (unsigned char)(CRC_CCITT & 0x00FF);

	return 19+1;
}

//Callback chamado quando o ADC finaliza a conversão
void HAL_ADC_ConvCpltCallback(ADC_HandleTypeDef* hadc){
#ifdef PPS_30_HZ
	//Interrompe o TIM1 e zera sua contagem atribuindo 0 ao Auto Reload Register
	htim1.Instance->CR1 &= ~(TIM_CR1_CEN);
	htim1.Instance->CNT = 0;

	BSP_LED_Toggle(LED1);

	//HAL_GPIO_TogglePin(GPIOF, GPIO_PIN_6);

	osSemaphoreRelease(pmuSem_id);
#else
	//Interrompe o TIM8 e zera sua contagem atribuindo 0 ao Auto Reload Register
	htim8.Instance->CR1 &= ~(TIM_CR1_CEN);
	htim8.Instance->CNT = 0;

	BSP_LED_Toggle(LED1);

	// Se for a primeira aquisição...
	if (trigcount == 0) {
		// Configura o TIM8 para ser trigado pelo TIM1 (ITR0)
		TIM_SlaveConfigTypeDef sSlaveConfig;
		sSlaveConfig.SlaveMode = TIM_SLAVEMODE_TRIGGER;
		sSlaveConfig.InputTrigger = TIM_TS_ITR0;
		sSlaveConfig.TriggerPolarity = TIM_TRIGGERPOLARITY_NONINVERTED;
		sSlaveConfig.TriggerPrescaler = TIM_TRIGGERPRESCALER_DIV1;
		sSlaveConfig.TriggerFilter = 0;
		HAL_TIM_SlaveConfigSynchronization(&htim8, &sSlaveConfig);

		/*Inicializa o TIM1*/
		//todo: verificar
		//htim1.Instance->CR1 |= (TIM_CR1_CEN);

		newSOC = 0;
		trigcount++;
	}
	// Do contrario, o TIM8 j� est� iniciado
	else {
		//Ent�o conta-se um pulso
		trigcount++;

		if (trigcount > 29) {
			// Caso o n�mero de pulsos-1 tenha sido atingido, o TIM1 � interrompido
			htim1.Instance->CR1 &= ~(TIM_CR1_CEN);
			htim1.Instance->CNT = 0;

			// O TIM8 � reestabelecido para ser disparado externamente
			TIM_SlaveConfigTypeDef sSlaveConfig;
			sSlaveConfig.SlaveMode = TIM_SLAVEMODE_TRIGGER;
			sSlaveConfig.InputTrigger = TIM_TS_ETRF;
			sSlaveConfig.TriggerPolarity = TIM_TRIGGERPOLARITY_NONINVERTED;
			sSlaveConfig.TriggerPrescaler = TIM_TRIGGERPRESCALER_DIV1;
			sSlaveConfig.TriggerFilter = 0;
			HAL_TIM_SlaveConfigSynchronization(&htim8, &sSlaveConfig);

			// E a contagem de pulsos zerada
			trigcount = 0;
		}
	}

	osSemaphoreRelease(pmuSem_id);
#endif
}
