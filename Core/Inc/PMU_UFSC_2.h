/*
 * Device specific calibration gains
 *
 * Device ID 0x0002
 * Identification: PMU UFSC 2
 */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __PMU_UFSC_2_H
#define __PMU_UFSC_2_H

#ifdef __cplusplus
extern "C" {
#endif

// PMU ID: Unique identification of the device.
#define PMUID	20


// Ethernet interface MAC Address Definition.
/* MAC ADDRESS: MAC_ADDR0:MAC_ADDR1:MAC_ADDR2:MAC_ADDR3:MAC_ADDR4:MAC_ADDR5 */
#define MAC_ADDR0   0x5CU
#define MAC_ADDR1   0xCDU
#define MAC_ADDR2   0x5BU
#define MAC_ADDR3   0xC3U
#define MAC_ADDR4   0xE1U
#define MAC_ADDR5   0xAAU

// Define nominal voltage
#define NOMINAL_VOLTAGE 220

/* PMU Gains */

/* Defines for normalized harmonics (127V or 220V) */
#if NOMINAL_VOLTAGE == 127
#define HARM_NORM_GAIN_R	(float)3.048178533
#define HARM_NORM_GAIN_S	(float)3.031196288
#define HARM_NORM_GAIN_T	(float)3.047962608
#endif

#if NOMINAL_VOLTAGE == 220
#define HARM_NORM_GAIN_R	(float)1.759630335
#define HARM_NORM_GAIN_S	(float)1.749826948
#define HARM_NORM_GAIN_T	(float)1.759505687
#endif

/* Defines for the magnitude of fundamental phases */
#define MAG_GAIN_R			(float)42.3832
#define MAG_GAIN_S			(float)42.4718
#define MAG_GAIN_T			(float)42.45794


/* Defines for the fit curve of the magnitude of fundamental R */
#define FIT_MAG_GAIN_A_R	(float)-0.0016362996
#define FIT_MAG_GAIN_B_R	(float)6.4330443785
#define FIT_MAG_GAIN_C_R	(float)0.0658874232
#define FIT_MAG_GAIN_D_R	(float)0.0351025233

/* Defines for the fit curve of the magnitude of fundamental S */
#define FIT_MAG_GAIN_A_S	(float)0.0009628812
#define FIT_MAG_GAIN_B_S	(float)6.3757106266
#define FIT_MAG_GAIN_C_S	(float)0.0686457110
#define FIT_MAG_GAIN_D_S	(float)0.0299965117

/* Defines for the fit curve of the magnitude of fundamental T */
#define FIT_MAG_GAIN_A_T	(float)0.0004282697
#define FIT_MAG_GAIN_B_T	(float)6.4019875313
#define FIT_MAG_GAIN_C_T	(float)0.0981472053
#define FIT_MAG_GAIN_D_T	(float)0.0467723654


/* Defines for the fit curve of the phase of fundamental R */
#define FIT_PHASE_GAIN_A_R	(float)60.256916502
#define FIT_PHASE_GAIN_B_R	(float)0.1863745932
#define FIT_PHASE_GAIN_C_R	(float)0.0076768782

/* Defines for the fit curve of the phase of fundamental S */
#define FIT_PHASE_GAIN_A_S	(float)60.273407182
#define FIT_PHASE_GAIN_B_S	(float)0.2463213789
#define FIT_PHASE_GAIN_C_S	(float)0.0144579474

/* Defines for the fit curve of the phase of fundamental T */
#define FIT_PHASE_GAIN_A_T	(float)60.271458135
#define FIT_PHASE_GAIN_B_T	(float)0.1695834628
#define FIT_PHASE_GAIN_C_T	(float)0.0045740754


/* Defines for the fit curve of the frequency of fundamental R */
#define FIT_FREQ_GAIN_A_R		(float)-2.5770186918
#define FIT_FREQ_GAIN_B_R		(float)0.0521374904

/* Defines for the fit curve of the frequency of fundamental S */
#define FIT_FREQ_GAIN_A_S		(float)-2.6741303661
#define FIT_FREQ_GAIN_B_S		(float)0.0537621928

/* Defines for the fit curve of the frequency of fundamental T */
#define FIT_FREQ_GAIN_A_T		(float)-2.3885333996
#define FIT_FREQ_GAIN_B_T		(float)0.0485053178


#ifdef __cplusplus
}
#endif

#endif /* __PMU_UFSC_2_H */

