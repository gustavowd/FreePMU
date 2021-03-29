# microPMU
The microPMU project delivers an open source Phasor Measurement Unit (PMU) for power system analysis based on the STM32F769 Discovery kit and an instrumentation PCB.

Prototype

![Prototype](https://github.com/gustavowd/microPMU/blob/main/Images/prototype.jpg)


The PMU code has several possible configurations. These settings can be configured in the main.h file.

1. Set the PMU identification number for the communication with PDC

#define PMUID	0x0001


2. Set the utility nominal frequency (50 or 60Hz)

#define NOMINAL_FREQ 60


3. Set the utility nominal voltage (127 or 220V)

#define NOMINAL_VOLTAGE 127


4. Set if the oversamling will be used or not (0 or 1)

#define OVERSAMPLING 1


5. Defines if the GPS will provide the 30 pulses per second or not (if not defined, GPS will provide 1 pulse per second)

#define PPS_30_HZ


6. Defines if the measure data will be based on peak or RMS values (possible values are RMS_GAIN or PEAK_GAIN)

#define PEAK_OR_RMS	RMS_GAIN


7. Set the transport protocol to communicate with the PDC (TCP_PMU or UDP_PMU)

#define TRANSPORT_PROTOCOL TCP_PMU


8. Several gains for the fit curves (depends on the instrumentation board)

For better performance, such gains must be defined through a calibration process



Interface video

[![Watch the interface video](https://img.youtube.com/vi/6qP93z6WD3M/hqdefault.jpg)](https://youtu.be/6qP93z6WD3M)


Connections

![Connections](https://github.com/gustavowd/microPMU/blob/main/Images/PMU-sch.png)


Used GPS
![GPS](https://github.com/gustavowd/microPMU/blob/main/Images/GPS.jpg)

Used voltage transformer

![voltage transformer](https://github.com/gustavowd/microPMU/blob/main/Images/voltage_transformer.jpg)

