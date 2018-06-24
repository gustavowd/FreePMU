/*
 * Arquivo de tarefas de Flavio Lori Grando(2016) em sua PMU proposta com código adaptado ao
 * sistema embarcado STM32F746G
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>
#include "main.h"
#include "arm_const_structs.h"
#include "cmsis_os.h"
#include "stm32f7xx_hal.h"
#include "stm32f769i_discovery.h"

#define MCLOCK_FREQ 210000000
#define numero_pontos 256

extern osMessageQId SerialGPSq;

extern TIM_HandleTypeDef 			 htim1;
extern TIM_HandleTypeDef			 htim2;

extern UART_HandleTypeDef 			 huart6;

extern volatile unsigned short adcBuffer[numero_pontos*3];

void UARTGetChar(UART_HandleTypeDef *huart, unsigned char *data, int timeout);

extern void MX_USART6_UART_Init(void);
extern unsigned int Get_ADC_Calib (void);


//				LEITURA DOS DADOS DO GPS

int cnt=0; // contador dos separadores (virgulas)
unsigned int date_limit, tow_limit, wno_limit, size; //delimitadores das informaçoes

char serialGPS_SET = 0;
char dado_gps[70];	//buffer da mensagem
char ID;			//Proprietary message identifier
char UTC_WNO[4]; 	//UTC week number
char UTC_TOW[6];	//UTC Time of Week
unsigned long week_num, sec_of_week, SOC=0;
unsigned long num;





///////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////
//				ESTIMAÇÃO DOS DADOS DE INTERESSE
//
// Fasores trifasicos, frequencia e rocof
unsigned n=0, t_inicial=2;
unsigned int send_serial=0;
unsigned int i=1;
int j=0;
volatile unsigned int n_amostras=256;

unsigned int k=0;
unsigned int flag=0;
unsigned int r,s,t, rr, ss, tt;

//Tabela da DFT
float teta, seno[numero_pontos], cosseno[numero_pontos];
//aplicacao do fator de calibracao
float FC;
float FasesAC[numero_pontos*3];
float FasesAC_mod_R[numero_pontos], FasesAC_mod_S[numero_pontos], FasesAC_mod_T[numero_pontos];
float FasesAC_ReIm_R[numero_pontos*2], FasesAC_ReIm_S[numero_pontos*2], FasesAC_ReIm_T[numero_pontos*2];
//Aplicacao da DFT
float modulor,modulos,modulot,faser,fases,faset,somaMr,somaMs,somaMt,somaFr,somaFs,somaFt;
//Fasor em coordenadas retangulares
float Mr,Ms,Mt,Fr,Fs,Ft;
//Fasor em coordenadas polares
float Mag_R,Mag_S,Mag_T,Fase_R,Fase_S,Fase_T;
//Frequencia e rocof
float f0=60; // Freq nominal
int fps=30; //Fasor por segundo - metade da freq. nominal neste trabalho
float desvio_faseR, desvio_faseS, desvio_faseT, freq_R, freq_S, freq_T, Freq, ROCOF;
float Fase_R_ant, Fase_S_ant, Fase_T_ant, Freq_ant;
float desvio_ang_esp;
float tolerancia = 10;
//media movel do desvio de angulo
float vetor_desvioR[10], vetor_desvioS[10], vetor_desvioT[10];
float soma_r, soma_s, soma_t;
unsigned int d=0;
//Correçao da taxa de amostragem
float  dif, vetor_freq[10], media_freq, soma_freq, media_freq_2;
float vetor_rocof[10], media_rocof, soma_rocof;
unsigned int  f=0, g=0, contador = 0;
//Transmissao via serial
float buffer[10];

//Definicoes para correcao das medidas
float mag, faseR_x_mag, faseS_x_mag, faseT_x_mag, faseR_x_freq, faseS_x_freq, faseT_x_freq;
float MagR_x_mag, MagS_x_mag, MagT_x_mag, MagR_x_freq;

//Fasores finais
volatile float Mag_R_final,Mag_S_final,Mag_T_final,Fase_R_final,Fase_S_final,Fase_T_final;
float Freq_final;

//Outros
float x, y, z, w, a=0;
unsigned int Freq_int;

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


// Referencia uma estrutura para o semáforo que sincroniza a transmissão pela porta serial
osSemaphoreId  pmuSem_id;
extern osSemaphoreId syncSem_id;
extern volatile unsigned char data_flag;
extern char isSyncCreated;
//extern char *IP_global[16];

volatile int trigcount = 0;

void MX_ADC1_Init(void);
void MX_ADC2_Init(void);
void MX_ADC3_Init(void);
void UARTPutString(char *string, uint16_t size);

extern ADC_HandleTypeDef hadc1;
extern ADC_HandleTypeDef hadc2;
extern ADC_HandleTypeDef hadc3;

void PMU_Task(void const * argument)
{
	/////////////////////// DEFINIÇÕES INICIAIS

	//while(1){
	//	vTaskDelay(1000);
	//}

	  osSemaphoreDef(SEM2);
	  pmuSem_id = osSemaphoreCreate(osSemaphore(SEM2), 1);
	  osSemaphoreWait(pmuSem_id, osWaitForever);


	// Tabela da DFT
	teta=2*M_PI/n_amostras;

	for(k=0;k<n_amostras;k++){
		seno[k]=sin(k*teta);
		cosseno[k]=cos(k*teta);
	}

	//Carrega valores iniciais
	desvio_ang_esp = 0;  //desvio de ângulo esperado
	tolerancia = 6.5;    //tolerancia do desvio esperado
	Freq_ant = f0;

	//Calcula a fração de segundo (para etiqueta de tempo)
	if(f0 == 60){
		FracSec = 0x00008235;  //Fração de segundo 0,03333
	}else if(f0 == 50){
		FracSec = 0x00009C40;  // Fração de segundo = 0,04
	}

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
	  HAL_ADCEx_MultiModeStart_DMA(&hadc1, (uint32_t*)adcBuffer, 768);

	  //HAL_TIM_Base_Start(&htim1);


	//////////////////// INICIO DO PROCESSO DE ESTIMACAO
	while(1)
	{


		// Espera completar as 768 amostras
		osSemaphoreWait(pmuSem_id, osWaitForever);
		//osDelay(33);

//#if 1
		// Calcula o fator de calibração
		//BSP_LED_Toggle(LED1);
		FC=1.21/(Get_ADC_Calib());

		// Aplica o fator de calibracao e carrega novo vetor (liberando o buffer)
		for(j=0;j<(n_amostras*3);j++){
		    FasesAC[j]=adcBuffer[j]*FC;//(3.0/4096);
		}

		send_serial = 0;


		r=0;
		s=1;
		t=2;

		somaMr=0;
		somaMs=0;
		somaMt=0;

		somaFr=0;
		somaFs=0;
		somaFt=0;


		//Aplicacao da DFT
		int k2 = 0;
		for (k=0;k<n_amostras;k++){

			modulor = FasesAC[r]*cosseno[k];
			modulos = FasesAC[s]*cosseno[k];
			modulot = FasesAC[t]*cosseno[k];

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

			faser = FasesAC[r]*seno[k];
			fases = FasesAC[s]*seno[k];
			faset = FasesAC[t]*seno[k];

			somaMr += modulor;
			somaMs += modulos;
			somaMt += modulot;

			somaFr += faser;
			somaFs += fases;
			somaFt += faset;

			r +=3;
			s +=3;
			t +=3;
		}

		//##############################
		// Para FFT
#if 1
		arm_cfft_f32(&arm_cfft_sR_f32_len256,FasesAC_ReIm_R,0,1);
		arm_cmplx_mag_f32(FasesAC_ReIm_R,FasesAC_mod_R,256);

		arm_cfft_f32(&arm_cfft_sR_f32_len256,FasesAC_ReIm_S,0,1);
		arm_cmplx_mag_f32(FasesAC_ReIm_S,FasesAC_mod_S,256);

		arm_cfft_f32(&arm_cfft_sR_f32_len256,FasesAC_ReIm_T,0,1);
		arm_cmplx_mag_f32(FasesAC_ReIm_T,FasesAC_mod_T,256);
#endif
		//##############################


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
		//Freq = 60;


		if(f0 == 50){
			if(Freq > 55){
				Freq = 55;
			}else if(Freq < 45){
				Freq = 45;
			}
		}else if(f0 == 60){
			if(Freq > 65){
				Freq = 65;
			}else if(Freq < 55){
				Freq = 55;
			}
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

#if 1
		//AJUSTE DA TAXA DE AMOSTRAGEM


		htim1.Instance->ARR = (float)MCLOCK_FREQ/((media_freq)*n_amostras);

		//APLICAÇÃO DAS CORREÇÕES (em magnitude e fase)

		//MAGNITUDE- ajuste da magnitude
		// Y-data = Magnitude reference - X-data = Magnitude measured (não em p.u.)


		mag = Mag_R;
		MagR_x_mag = (float)-0.0018945693 + (float)4.1062603119*mag;
		MagR_x_mag += (float)-0.0077128570*mag*mag;
		MagR_x_mag += (float)0.0262579711*mag*mag*mag;
		MagR_x_mag += (float)-0.0142115525*mag*mag*mag*mag;

		mag = Mag_S;
		MagS_x_mag = (float)-0.0018945693+(float)4.1062603119*mag;
		MagS_x_mag += (float)-0.0077128570*mag*mag;
		MagS_x_mag += (float)0.0262579711*mag*mag*mag;
		MagS_x_mag += (float)-0.0142115525*mag*mag*mag*mag;

		mag = Mag_T;
		MagT_x_mag = (float)-0.0018945693+(float)4.1062603119*mag;
		MagT_x_mag += (float)-0.0077128570*mag*mag;
		MagT_x_mag += (float)0.0262579711*mag*mag*mag;
		MagT_x_mag += (float)-0.0142115525*mag*mag*mag*mag;


		//FASE
		//correcao de fase em funcao da magnitude
		// Y-data = Phase deviation - X-data = Magnitude measured (não em p.u.)

		mag = MagR_x_mag;
		faseR_x_mag = (float)-1.2595979549+(float)0.4039280602*mag;
		faseR_x_mag += (float)-0.1010751752*mag*mag;
		faseR_x_mag += (float)0.0096132710*mag*mag*mag;

		mag = MagS_x_mag;
		faseS_x_mag = (float)-1.2595979549+(float)0.4039280602*mag;
		faseS_x_mag += (float)-0.1010751752*mag*mag;
		faseS_x_mag += (float)0.0096132710*mag*mag*mag;

		mag = MagT_x_mag;
		faseT_x_mag = (float)-1.2595979549+(float)0.4039280602*mag;
		faseT_x_mag += (float)-0.1010751752*mag*mag;
		faseT_x_mag += (float)0.0096132710*mag*mag*mag;

		// FREQUENCIA
		//correcao de fase em funcao da frequencia
		mag = media_freq;
		faseR_x_freq = (float)0.0237760101*mag-(float)1.1727874302;
		faseS_x_freq = (float)0.0237760101*mag-(float)1.1727874302;
		faseT_x_freq = (float)0.0237760101*mag-(float)1.1727874302;



		MagR_x_freq = mag*((float)-3.6463158287E-5)+(float)0.0011139213;
		MagR_x_freq = mag*((float)-3.6463158287E-5)+(float)0.0011139213;
		MagR_x_freq = mag*((float)-3.6463158287E-5)+(float)0.0011139213;


		// Calcula magnitude final
		// Ajustes da magnitude:
/*
		// Sensor AZUL:
		Mag_R_final = MagR_x_mag * 60.665;
		Mag_S_final = MagS_x_mag * 61.065;
		Mag_T_final = MagT_x_mag * 61.095;
*/
		// Sensor PRETO:
		Mag_R_final = MagR_x_mag * 64.727;
		Mag_S_final = MagS_x_mag * 65.105;
		Mag_T_final = MagT_x_mag * 64.596;


		//Calcula fase final (aplica as correcoes anteriores)
		Fase_R_final = Fase_R+faseR_x_mag+faseR_x_freq;
		Fase_S_final = Fase_S+faseS_x_mag+faseS_x_freq;
		Fase_T_final = Fase_T+faseT_x_mag+faseT_x_freq;


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


/*
		 Mag_R_final = 125;
		 Mag_S_final = 125;
		 Mag_T_final = 125;
		 Fase_R_final = 120;
		 Fase_S_final = 240;
		 Fase_T_final = 0;

*/

		  // DADOS DA TRANSMISSAO (via serial pro PC)
		buffer[0] = Mag_R_final;
		buffer[1] = Fase_R_final;//_final;
		buffer[2] = Freq_final;
		buffer[3] = media_rocof;

		// Envia os dados pela serial
		char *dados = (char*)&buffer;
		UARTPutString(dados,12);


		SOC = 1468976006;
		FracSec = (unsigned long)a*FracSec;
		a=a+1;
		if(a==fps){
			SOC = SOC+1;
			a=0;
		}
		#endif


		if((isSyncCreated == 1) && (data_flag)){
			//cnt++;
			//if(cnt > 50){
				cnt = 0;

				osSemaphoreRelease(syncSem_id);

			//}

		}
		BSP_LED_Toggle(LED1);

	}
}

////////////////////////////////////////////////////////
///////////////////////////////////////////////////////
//////////////////////////////////////////////////////////
//			Pilha de protocolos
//
#if 0
 #include "lwiplib.h"

extern void SocketTCPClient( void *pvParameters );
extern void pmu_tcp_server(void *pvParameters);
extern void pmu_tcp_server_out(void *pvParameters);
#endif
void UpLwIP(void *param)
{
#if 0
	(void)param;

	//UARTPutString(USART1, "Ethernet lwIP example\n\r");
    //
    // Tell the user what we are doing just now.
    //
    // UARTPutString(USART1, "Aguardando IP.\n\r");

    //
    // Initialize the lwIP library, using DHCP.
    //
    lwIPInit(IPADDR_USE_DHCP);

    // Espera pela comunicação estar ativa
    while(lwip_link_up != TRUE)
    {
    	DelayTask(10);
    	/* Loop forever. LW_Periodic_Tasks() must be called in order to check
    	 * if there is a packet to be read. There is no interrupt handler for
    	 * the ENC28J60 in such driver implementation. Need for DHCP to work. */
    	LW_Periodic_Tasks();
    }

	//sys_thread_new("LwIP TCP client", SocketTCPClient, NULL, 1280, 5);
    sys_thread_new("PMU TCP Server", pmu_tcp_server, NULL, 2048, 6);
    sys_thread_new("PMU TCP Server out", pmu_tcp_server_out, NULL, 2048, 5);

    while(1)
    {
    	DelayTask(10);
    	/* Loop forever. LW_Periodic_Tasks() must be called in order to check
    	 * if there is a packet to be read. There is no interrupt handler for
    	 * the ENC28J60 in such driver implementation */
    	LW_Periodic_Tasks();
    }
#endif
}



////////////////////////////////////////////////////////
///////////////////////////////////////////////////////
//////////////////////////////////////////////////////////


extern xSemaphoreHandle sUART;
char teste;

void GPS_Task(void const * argument)
{

	osMessageQDef(SerialGPSq, 128, unsigned char);
	SerialGPSq = osMessageCreate(osMessageQ(SerialGPSq), NULL);


	sUART = xSemaphoreCreateBinary();
	MX_USART6_UART_Init();
	HAL_UART_Receive_IT(&huart6, (uint8_t*)&teste, 1);

	while(1){
	    volatile unsigned char *p;

		p = (unsigned char*)&dado_gps;

		do{
			UARTGetChar(&huart6, (uint8_t*)p, osWaitForever);
		  }while(*p != '$');

		p--;

		do{
		   p++;
		   UARTGetChar(&huart6, (uint8_t*)p, osWaitForever);
		}while(*p != '\n');




		//Extrai a informaçao: segundos na semana
		for(i=0;i<6;i++){

		  UTC_TOW[i]=dado_gps[25+i];

		}

		//Extrai a informaçao: numero da semana
		for(i=0;i<4;i++){

			UTC_WNO[i]=dado_gps[35+i];

		}

		//Envia pro LabVIEW
		//char *dados = (char *)&dado_gps;
		//UARTPutMultiChar(dados);

		//Datasheet mentiroso, não é fonte UTC, é GPS! 10 anos de diferença
		week_num = atoi(UTC_WNO);

		sec_of_week = atoi(UTC_TOW);

		//segundo secular UNIX time (1 jan 1970)
		SOC = sec_of_week + week_num*604800 + 60*60*24*365*10 + 60*60*24*7;

		//SOC = 1468976006;
		a=0; //Pra zerar o contador do FracSec
		}

}

void UARTGetChar(UART_HandleTypeDef *huart, unsigned char *data, int timeout)
{
	osEvent event;

	if (huart->Instance == USART6)
	{
		event = osMessageGet(SerialGPSq, timeout);
		if(event.status == osEventMessage){
			*data = (unsigned char)event.value.v;
		}
	}

}


/*
	    		size = sizeof(dado_gps);

	    		//Identificação dos separadores (virgulas)
	    		cnt = 0;

	    		for(j=0;j<size;j++){

	    			if(dado_gps[j] == ','){
	    				cnt++;
	    			}

	    			switch (cnt){
	    			case 4:
	    				date_limit = j;
	    				break;
	    			case 5:
	    				tow_limit = j;
	    				break;
	    			case 6:
	    				wno_limit = j;
	    				break;
	    			default:
	    				break;
	    			}
	    		}

	    		//Extrai a informaçao: segundos na semana
	    		size = tow_limit - date_limit - 4; //Ex: ...,113851.00,...

	    		for(j=0;j<size;j++){
	    			UTC_TOW[j]=dado_gps[date_limit+1+j];
	    		}

	    		//Extrai a informaçao: numero da semana
	    		size = wno_limit - tow_limit-1;	//Ex: ,1196,
	    		for(j=0;j<size;j++){
	    			UTC_WNO[i]=dado_gps[tow_limit+1+j];
	    		}

	    		x = dado_gps[0];
	    		y = dado_gps[70];

	    		week_num = atoi(UTC_WNO);  //string para inteiro - numero da semana
	    		sec_of_week = atoi(UTC_TOW); //string para inteiro - segundos na semana
*/






//////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
//						FORMATAÇÃO DOS DADOS
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

// IMPLEMENTAÇÃO DO CRC-CCITT
// Baseado na norma

uint16_t CRC_CCITT;

uint16_t ComputeCRC(unsigned char *Message, unsigned char MessLen)
{
	uint16_t crc=0xFFFF;
	uint16_t temp;
	uint16_t quick;
	int i;

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


unsigned char ucData[128];


unsigned int PmuID = 0x0001;			// Identificacao da PMU





/////////////// FRAME DE DADOS
int frame_data(void)
{

	// 1. SYNC = Data Message Sync Byte and Frame Type
	ucData[0] = A_SYNC_AA;
	ucData[1] = A_SYNC_DATA;

	// 2. FRAMESIZE = Tamanho do frame, incluindo CHK
	ucData[2] = (unsigned char)0x00;
	ucData[3] = (unsigned char)0x32;

	// 3. IDCODE = ID da fonte de transmissao
	ucData[4] = (unsigned char)((PmuID & 0xFF00) >> 8);
	ucData[5] = (unsigned char)(PmuID & 0x00FF);

	// 4. SOC = Second Of Century = Estampa de tempo, segundo secular
	ucData[6] = (unsigned char)((SOC & 0xFF000000) >> 24);
	ucData[7] = (unsigned char)((SOC & 0x00FF0000) >> 16);
	ucData[8] = (unsigned char)((SOC & 0x0000FF00) >> 8);
	ucData[9] = (unsigned char)(SOC & 0x000000FF);

	// 5. FRACSEC = Fração do segundo e qualidade do tempo
	ucData[10] = (unsigned char)((FracSec & 0xFF000000) >> 24);  //Time quality (seção 6.2.2)
	ucData[11] = (unsigned char)((FracSec & 0x00FF0000) >> 16);  //fracsec
	ucData[12] = (unsigned char)((FracSec & 0x0000FF00) >> 8);   //fracsec
	ucData[13] = (unsigned char)(FracSec & 0x000000FF);			//fracsec

	// 6. STAT = Flags, a criterio do usuario
	ucData[14] = 0x00;
	ucData[15] = 0x00;

	int i = 16;

	// 7. PHASORS
	// Magnitude primeiro - unidades de engenharia

	float Fase_R_rad, Fase_S_rad, Fase_T_rad ;
	// Fase, depois da magnitude -  em radianos
	Fase_R_rad = Fase_R_final*M_PI/180.0;
	Fase_S_rad = Fase_S_final*M_PI/180.0;
	Fase_T_rad = Fase_T_final*M_PI/180.0;


	convert_float_to_char.pf = Mag_R_final;
	ucData[i++] = convert_float_to_char.byte[3];
	ucData[i++] = convert_float_to_char.byte[2];
	ucData[i++] = convert_float_to_char.byte[1];
	ucData[i++] = convert_float_to_char.byte[0];

	convert_float_to_char.pf = Fase_R_rad;
	ucData[i++] = convert_float_to_char.byte[3];
	ucData[i++] = convert_float_to_char.byte[2];
	ucData[i++] = convert_float_to_char.byte[1];
	ucData[i++] = convert_float_to_char.byte[0];

	convert_float_to_char.pf = Mag_S_final;
	ucData[i++] = convert_float_to_char.byte[3];
	ucData[i++] = convert_float_to_char.byte[2];
	ucData[i++] = convert_float_to_char.byte[1];
	ucData[i++] = convert_float_to_char.byte[0];

	convert_float_to_char.pf = Fase_S_rad;
	ucData[i++] = convert_float_to_char.byte[3];
	ucData[i++] = convert_float_to_char.byte[2];
	ucData[i++] = convert_float_to_char.byte[1];
	ucData[i++] = convert_float_to_char.byte[0];

	convert_float_to_char.pf = Mag_T_final;
	ucData[i++] = convert_float_to_char.byte[3];
	ucData[i++] = convert_float_to_char.byte[2];
	ucData[i++] = convert_float_to_char.byte[1];
	ucData[i++] = convert_float_to_char.byte[0];

	convert_float_to_char.pf = Fase_T_rad;
	ucData[i++] = convert_float_to_char.byte[3];
	ucData[i++] = convert_float_to_char.byte[2];
	ucData[i++] = convert_float_to_char.byte[1];
	ucData[i++] = convert_float_to_char.byte[0];

	// 8. FREQ = Desvio de frequencia do nominal, em mHz
	//Freq_final = (Freq_final - f0)*1000;

	convert_float_to_char.pf = (Freq_final);
	ucData[i++] = convert_float_to_char.byte[3];
	ucData[i++] = convert_float_to_char.byte[2];
	ucData[i++] = convert_float_to_char.byte[1];
	ucData[i++] = convert_float_to_char.byte[0];

	// 9. DFREQ = ROCOF in Hz/s "times 100"
	//ROCOF = ROCOF*100;

	convert_float_to_char.pf = (media_rocof*100);
	ucData[i++] = convert_float_to_char.byte[3];
	ucData[i++] = convert_float_to_char.byte[2];
	ucData[i++] = convert_float_to_char.byte[1];
	ucData[i++] = convert_float_to_char.byte[0];

	// 10. ANALOG = Analog word
	//ucData[48] = 0x00;
	//ucData[49] = 0x00;
	//ucData[50] = 0x00;
	//ucData[51] = 0x00;

	// 11. DIGITAL = Digital status word
	//ucData[52] = 0x00;
	//ucData[53] = 0x00;

	// 12. CRC-CCITT = Cyclic Redundancy Codes (CRC)
	CRC_CCITT = ComputeCRC(ucData, i);

	ucData[i++] = (unsigned char)((CRC_CCITT & 0xFF00) >> 8);
	ucData[i++] = (unsigned char)(CRC_CCITT & 0x00FF);


	return i;
}

/////////////// FRAME DE CONFIGURAÇÃO
int frame_config(void)
{


	//unsigned char ucData[98];
	char CHName[16]; //vetor nome dos canais, frame config

	memset(ucData, 0x00, sizeof(ucData));

	// 1. SYNC = Data Message Sync Byte andFrame Type
	ucData[0] = A_SYNC_AA;
	ucData[1] = A_SYNC_CFG2;

	// 2. FRAMESIZE = Tamanho do frame, incluindo CHK
	ucData[2] = (unsigned char)0x00;
	ucData[3] = (unsigned char)0x72; //

	// 3. IDCODE = ID da fonte de transmissao
	ucData[4] = (unsigned char)((PmuID & 0xFF00) >> 8);
	ucData[5] = (unsigned char)(PmuID & 0x00FF);

	// 4. SOC = Second Of Century = Estampa de tempo, segundo secular
	ucData[6] = (unsigned char)((SOC & 0xFF000000) >> 24);
	ucData[7] = (unsigned char)((SOC & 0x00FF0000) >> 16);
	ucData[8] = (unsigned char)((SOC & 0x0000FF00) >> 8);
	ucData[9] = (unsigned char)(SOC & 0x000000FF);

	// 5. FRACSEC = Fração do segundo e qualidade do tempo
	ucData[10] = (unsigned char)((FracSec & 0xFF000000) >> 24);  //Time quality (seção 6.2.2)
	ucData[11] = (unsigned char)((FracSec & 0x00FF0000) >> 16);  //fracsec
	ucData[12] = (unsigned char)((FracSec & 0x0000FF00) >> 8);   //fracsec
	ucData[13] = (unsigned char)(FracSec & 0x000000FF);			//fracsec

	// 6. TIME_BASE = Resolucao do FRACSEC
	ucData[14] = (unsigned char)((Time_base & 0xFF000000) >> 24);
	ucData[15] = (unsigned char)((Time_base & 0x00FF0000) >> 16);
	ucData[16] = (unsigned char)((Time_base & 0x0000FF00) >> 8);
	ucData[17] = (unsigned char)(Time_base & 0x000000FF);

	// 7. NUM_PMU = numero de PMUs inclusas no frame de dados
	ucData[18] = 0x00;
	ucData[19] = 0x01;

	// 8. STN = Nome da estacao
	//Exemplo: "Station A" = 53 74 61 74 69 6F 6E 20 41 20 20 20 20 20 20 20
	ucData[20] = 0x53;
	ucData[21] = 0x74;
	ucData[22] = 0x61;
	ucData[23] = 0x74;
	ucData[24] = 0x69;
	ucData[25] = 0x6F;
	ucData[26] = 0x6E;
	ucData[27] = 0x20;
	ucData[28] = 0x41;
	ucData[29] = 0x20;
	ucData[30] = 0x20;
	ucData[31] = 0x20;
	ucData[32] = 0x20;
	ucData[33] = 0x20;
	ucData[34] = 0x20;
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
	strcpy(CHName, "Fase_A");
	memcpy(ucData + 46, CHName, 16);

	memset(CHName, 0x00, 16);
	strcpy(CHName, "Fase_B");
	memcpy(ucData + 62, CHName, 16);

	memset(CHName, 0x00, 16);
	strcpy(CHName, "Fase_C");
	memcpy(ucData + 78, CHName, 16);

	int i = 94;
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

	// 20. DATA_RATE = Taxa de transmissao de fasores
	ucData[i++] = ((fps & 0xFF00) >> 8);
	ucData[i++] = (fps & 0x00FF);

	//21. CRC-CCITT = Calcula o CRC

	CRC_CCITT = ComputeCRC(ucData, i);

	ucData[i++] = (unsigned char)((CRC_CCITT & 0xFF00) >> 8);
	ucData[i++] = (unsigned char)(CRC_CCITT & 0x00FF);

	return i;
}


///////////////// FRAME DE CABEÇALHO
int frame_header(void)
{

	//unsigned char ucData[20];

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

	// 5. FRACSEC = Fração do segundo e qualidade do tempo
	ucData[10] = (unsigned char)((FracSec & 0xFF000000) >> 24);  //Time quality (seção 6.2.2)
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
	//Interrompe o TIM1 e zera sua contagem atribuindo 0 ao Auto Reload Register
	htim1.Instance->CR1 &= ~(TIM_CR1_CEN);
	htim1.Instance->CNT = 0;

	BSP_LED_Toggle(LED1);

	// Se for a primeira aquisição...
	if (trigcount == 0) {
		// Configura o TIM1 para ser trigado pelo TIM2 (ITR1)
		TIM_SlaveConfigTypeDef sSlaveConfig;
		sSlaveConfig.SlaveMode = TIM_SLAVEMODE_TRIGGER;
		sSlaveConfig.InputTrigger = TIM_TS_ITR1;
		sSlaveConfig.TriggerPolarity = TIM_TRIGGERPOLARITY_NONINVERTED;
		sSlaveConfig.TriggerPrescaler = TIM_TRIGGERPRESCALER_DIV1;
		sSlaveConfig.TriggerFilter = 0;
		HAL_TIM_SlaveConfigSynchronization(&htim1, &sSlaveConfig);

		trigcount++;
	}
	// Do contrario, o TIM2 já está iniciado
	else {
		//Então conta-se um pulso
		trigcount++;

		if (trigcount > 29) {
			// Caso o número de pulsos-1 tenha sido atingido, o TIM2 é interrompido
			htim2.Instance->CR1 &= ~(TIM_CR1_CEN);
			htim2.Instance->CNT = 0;

			// O TIM1 é reestabelecido para ser disparado externamente
			TIM_SlaveConfigTypeDef sSlaveConfig;
			sSlaveConfig.SlaveMode = TIM_SLAVEMODE_TRIGGER;
			sSlaveConfig.InputTrigger = TIM_TS_ETRF;
			sSlaveConfig.TriggerPolarity = TIM_TRIGGERPOLARITY_NONINVERTED;
			sSlaveConfig.TriggerPrescaler = TIM_TRIGGERPRESCALER_DIV1;
			sSlaveConfig.TriggerFilter = 0;
			HAL_TIM_SlaveConfigSynchronization(&htim1, &sSlaveConfig);

			// E a contagem de pulsos zerada
			trigcount = 0;
		}
	}

	osSemaphoreRelease(pmuSem_id);
}
