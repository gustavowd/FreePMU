# FreePMU

A Low-Cost, Open Architecture, Synchronized Harmonic Phasor Measurement Unit.

The FreePMU project delivers an open source Phasor Measurement Unit (PMU) for power system analysis based on the STM32F769 Discovery kit and an instrumentation PCB. Its characteristics are low cost, open architecture and open source code. FreePMU measures fundamental and harmonic synchrophasors as well as the signal frequency for a three-phase distribution circuit.

Prototype

![pmu](https://user-images.githubusercontent.com/16105418/142029947-1d503f89-67db-444a-9919-b6f38e5b5248.png)

# Publications

SEGER, P. V. H.; MORETO, MIGUEL; GRANDO, F. L.; LAZZARETTI, A. E.; DENARDIN, G. W.; PASTRO, C. R. Monitoring Low Voltage Electrical Networks Using Low Cost PMUs: a Case Study. IEEE International Conference on Environment and Electrical Engineering and IEEE Industrial and Commercial Power Systems Europe, 2020, Madrid.

GRANDO, F. L.; DENARDIN, G. W.; MORETO, M.; LAZZARETTI, A. E.; VIEIRA NETO, H. A method for synchronized harmonic phasor measurement based on hardware-enhanced Fast Fourier Transform. International Transactions on Electrical Energy Systems, v. 30, p. 1-19, 2020.



# Configurations

The PMU code has several possible configurations. These settings can be configured in the main.h file.

1. Set the PMU identification number for the communication with PDC

#define PMUID	0x0001


2. Set the utility nominal frequency (50 or 60Hz)

#define NOMINAL_FREQ 60


3. Set the utility nominal voltage (127 or 220V)

#define NOMINAL_VOLTAGE 127


4. Define if harmonics are enable or not

#define ENABLE_HARMONICS 1


5. Set if the oversamling will be used or not (0 or 1)

#define OVERSAMPLING 1


6. Define the GPS baudrate

#define GPS_BAUDRATE 115200


7. Set this define to 1 for simulate GPS time stamp and PPS

#define SIMULATED_GPS 0


8. Defines if the GPS will provide the 30 pulses per second or not (if not defined, GPS will provide 1 pulse per second)

#define PPS_30_HZ


9. Defines if the measure data will be based on peak or RMS values (possible values are RMS_GAIN or PEAK_GAIN)

#define PEAK_OR_RMS	RMS_GAIN


10. Set the transport protocol to communicate with the PDC (TCP_PMU or UDP_PMU)

#define TRANSPORT_PROTOCOL TCP_PMU


11. Several gains for the fit curves (depends on the instrumentation board)

For better performance, such gains must be defined through a calibration process



Interface video

[![Watch the interface video](https://img.youtube.com/vi/6qP93z6WD3M/hqdefault.jpg)](https://youtu.be/6qP93z6WD3M)


Connections

![Connections](https://github.com/gustavowd/microPMU/blob/main/Images/PMU-sch.png)


Used GPS
![GPS](https://github.com/gustavowd/microPMU/blob/main/Images/GPS.jpg)

Used voltage transformer

![voltage transformer](https://github.com/gustavowd/microPMU/blob/main/Images/voltage_transformer.jpg)

