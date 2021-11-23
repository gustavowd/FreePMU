/*
 * Device specific calibration gains
 *
 * Device ID 0x0001
 * Identification: PMU UFSC 1
 */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __PMU_UFSC_1_H
#define __PMU_UFSC_1_H

#ifdef __cplusplus
extern "C" {
#endif

// Define nominal voltage
#define NOMINAL_VOLTAGE 220

/* PMU Gains */

/* Defines for normalized harmonics (127V or 220V) */
#if NOMINAL_VOLTAGE == 127
#define HARM_NORM_GAIN_R	(float)3.047991605
#define HARM_NORM_GAIN_S	(float)3.067817502
#define HARM_NORM_GAIN_T	(float)3.057752763
#endif

#if NOMINAL_VOLTAGE == 220
#define HARM_NORM_GAIN_R	(float)1.759522427
#define HARM_NORM_GAIN_S	(float)1.770967376
#define HARM_NORM_GAIN_T	(float)1.765157277
#endif

/* Defines for the magnitude of fundamental phases */
#define MAG_GAIN_R			(float)42.5038
#define MAG_GAIN_S			(float)42.1823
#define MAG_GAIN_T			(float)42.5782


/* Defines for the fit curve of the magnitude of fundamental R */
#define FIT_MAG_GAIN_A_R	(float)-0.0104230472
#define FIT_MAG_GAIN_B_R	(float)6.4799561727
#define FIT_MAG_GAIN_C_R	(float)0.0058096119
#define FIT_MAG_GAIN_D_R	(float)0.0225779260

/* Defines for the fit curve of the magnitude of fundamental S */
#define FIT_MAG_GAIN_A_S	(float)-0.0094105471
#define FIT_MAG_GAIN_B_S	(float)6.5295808671
#define FIT_MAG_GAIN_C_S	(float)0.0517533485
#define FIT_MAG_GAIN_D_S	(float)0.0122170154

/* Defines for the fit curve of the magnitude of fundamental T */
#define FIT_MAG_GAIN_A_T	(float)-0.0038224285
#define FIT_MAG_GAIN_B_T	(float)6.4664725524
#define FIT_MAG_GAIN_C_T	(float)0.0200856470
#define FIT_MAG_GAIN_D_T	(float)0.0147323440


/* Defines for the fit curve of the phase of fundamental R */
#define FIT_PHASE_GAIN_A_R	(float)61.3200434278
#define FIT_PHASE_GAIN_B_R	(float)0.5306019593
#define FIT_PHASE_GAIN_C_R	(float)0.0359982043

/* Defines for the fit curve of the phase of fundamental S */
#define FIT_PHASE_GAIN_A_S	(float)61.1903481072
#define FIT_PHASE_GAIN_B_S	(float)0.6895729716
#define FIT_PHASE_GAIN_C_S	(float)0.0945399081
#define FIT_PHASE_GAIN_D_S	(float)0.0047453058

/* Defines for the fit curve of the phase of fundamental T */
#define FIT_PHASE_GAIN_A_T	(float)60.7272664968
#define FIT_PHASE_GAIN_B_T	(float)0.3813063315
#define FIT_PHASE_GAIN_C_T	(float)0.0388992543
#define FIT_PHASE_GAIN_D_T	(float)0.0013921956


/* Defines for the fit curve of the frequency of fundamental R */
#define FIT_FREQ_GAIN_A_R		(float)-2.7531705491
#define FIT_FREQ_GAIN_B_R		(float)0.0512209453

/* Defines for the fit curve of the frequency of fundamental S */
#define FIT_FREQ_GAIN_A_S		(float)-2.3592039210
#define FIT_FREQ_GAIN_B_S		(float)0.0477269049

/* Defines for the fit curve of the frequency of fundamental T */
#define FIT_FREQ_GAIN_A_T		(float)-2.6454608536
#define FIT_FREQ_GAIN_B_T		(float)0.0538034619


#ifdef __cplusplus
}
#endif

#endif /* __PMU_UFSC_1_H */

