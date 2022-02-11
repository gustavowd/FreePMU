import sys
from PyQt5.QtCore import pyqtSlot
from PyQt5.QtWidgets import QApplication, QDialog, QMainWindow
from PyQt5.uic import loadUi
from PyQt5 import QtWidgets, uic
from pyqtgraph import PlotWidget
import pyqtgraph as pg

from PySide2 import QtCore
from PyQt5.QtCore import QDate, QTime, QDateTime, Qt

from ctypes import cdll, c_long, c_int, c_char_p, create_string_buffer

import numpy as np

import threading
from threading import Thread
import time
import struct
import socket
import math

from ctypes import *
import datetime  


class MainWindow(QMainWindow):
    connected = 0
    pressed = 0
    counter = 0
    idx = 0.0
    overflow = False
    graph_data_y0 = []
    graph_data_y1 = []
    graph_data_y2 = []
    graph_data_y3 = []
    graph_data_y4 = []
    graph_data_y5 = []
    graph_data_y6 = []
    graph_data_y7 = []
    graph_data_y8 = []
    graph_data_y9 = []
    graph_data_y10 = []
    graph_data_x = []

    data_line0 = 0
    data_line1 = 0
    data_line2 = 0
    data_line3 = 0
    data_line4 = 0
    data_line5 = 0
    data_line6 = 0
    data_line7 = 0
    data_line8 = 0
    data_line9 = 0
    data_line10 = 0

    station_name = []
    num_phasors = []
    num_analogs = []
    num_digitals = []
    offsets = []

    phasor_name0 = []
    phasor_name1 = []
    phasor_name2 = []
    phasor_name3 = []

    phasors_mag0 = []
    phasors_phase0 = []

    phasors_mag1 = []
    phasors_phase1 = []

    phasors_mag2 = []
    phasors_phase2 = []

    phasors_mag3 = []
    phasors_phase3 = []

    def __init__(self):
        super(MainWindow, self).__init__()
        loadUi('freepmu_pdc.ui', self)
        self.pushButton_connect.clicked.connect(self.on_pushButton_connect_clicked)
        self.comboBox.currentIndexChanged.connect(self.on_comboBox_clicked)
        self.timer1 = QtCore.QTimer()
        self.timer1.timeout.connect(self.showTime)

        self.graph_freq.setLabel('left', "<span style=\"color:blue;font-size:12px\">Frequency (Hz)</span>")
        self.graph_freq.setLabel('bottom', "<span style=\"color:blue;font-size:12px\">Time (s)</span>")
        self.graph_freq.setBackground('w')
        self.graph_freq.setXRange(0.0, 10.0, padding=0)

        self.graph_phase.setLabel('left', "<span style=\"color:blue;font-size:12px\">Phase (Degrees)</span>")
        self.graph_phase.setLabel('bottom', "<span style=\"color:blue;font-size:12px\">Time (s)</span>")
        self.graph_phase.setBackground('w')
        self.graph_phase.setYRange(-180.0, 180.0, padding=0)
        self.graph_phase.setXRange(0.0, 10.0, padding=0)

    def showTime(self):
        self.pressed = 0
        if self.connected == 1:
            read_buffer = self.tcpCliSock.recv(320)
            if read_buffer:
                if (read_buffer[0] == 170) and (read_buffer[1] == 1):
                    #print(read_buffer)
                    frame_size = (read_buffer[2] << 8) + read_buffer[3]
                    self.id_code = (read_buffer[4] << 8) + read_buffer[5]
                    soc = (read_buffer[6] << 24) + (read_buffer[7] << 16) + (read_buffer[8] << 8) + read_buffer[9]
                    fracsec = (read_buffer[10] << 24) + (read_buffer[11] << 16) + (read_buffer[12] << 8) + read_buffer[13]
                    self.fracsec_f = fracsec / 1000000.0
                    self.fracsec_f = float("{:.3f}".format(self.fracsec_f))
                    self.date_time = datetime.datetime.fromtimestamp(soc)  
                    #print("ID CODE:", self.id_code, "SOC:", self.date_time, "FracSec:", self.fracsec_f)
                    self.label_time.setText(str(self.date_time))
                    self.label_frac.setText(str(self.fracsec_f))
                    freq_tmp = (read_buffer[40] << 24) + (read_buffer[41] << 16) + (read_buffer[42] << 8) + read_buffer[43]
                    cp = pointer(c_int(freq_tmp))           # make this into a c integer
                    fp = cast(cp, POINTER(c_float))  # cast the int pointer to a float pointer
                    self.freq = fp.contents.value         # dereference the pointer, get the float

                    k = 0
                    for j in range(0, self.num_pmu):
                        k = self.offsets[j]
                        #print(k)
                        for i in range(0, self.num_phasors[j]):
                            if j == 0:
                                phasor_tmp = (read_buffer[k] << 24) + (read_buffer[k+1] << 16) + (read_buffer[k+2] << 8) + read_buffer[k+3]
                                cp = pointer(c_int(phasor_tmp))           # make this into a c integer
                                fp = cast(cp, POINTER(c_float))  # cast the int pointer to a float pointer
                                self.phasors_mag0[i] = fp.contents.value         # dereference the pointer, get the float
                                #print(self.phasors_mag0[i])

                                phasor_tmp = (read_buffer[k+4] << 24) + (read_buffer[k+5] << 16) + (read_buffer[k+6] << 8) + read_buffer[k+7]
                                cp = pointer(c_int(phasor_tmp))           # make this into a c integer
                                fp = cast(cp, POINTER(c_float))  # cast the int pointer to a float pointer
                                self.phasors_phase0[i] = (fp.contents.value * 180.0) / math.pi        # dereference the pointer, get the float
                                #print(self.phasors_phase0[i])
                            elif j == 1:
                                phasor_tmp = (read_buffer[k] << 24) + (read_buffer[k+1] << 16) + (read_buffer[k+2] << 8) + read_buffer[k+3]
                                cp = pointer(c_int(phasor_tmp))           # make this into a c integer
                                fp = cast(cp, POINTER(c_float))  # cast the int pointer to a float pointer
                                self.phasors_mag1[i] = fp.contents.value         # dereference the pointer, get the float
                                #print(self.phasors_mag1[i])

                                phasor_tmp = (read_buffer[k+4] << 24) + (read_buffer[k+5] << 16) + (read_buffer[k+6] << 8) + read_buffer[k+7]
                                cp = pointer(c_int(phasor_tmp))           # make this into a c integer
                                fp = cast(cp, POINTER(c_float))  # cast the int pointer to a float pointer
                                self.phasors_phase1[i] = (fp.contents.value * 180.0) / math.pi        # dereference the pointer, get the float
                                #print(self.phasors_phase1[i])
                            elif j == 2:
                                phasor_tmp = (read_buffer[k] << 24) + (read_buffer[k+1] << 16) + (read_buffer[k+2] << 8) + read_buffer[k+3]
                                cp = pointer(c_int(phasor_tmp))           # make this into a c integer
                                fp = cast(cp, POINTER(c_float))  # cast the int pointer to a float pointer
                                self.phasors_mag2[i] = fp.contents.value         # dereference the pointer, get the float
                                #print(self.phasors_mag2[i])

                                phasor_tmp = (read_buffer[k+4] << 24) + (read_buffer[k+5] << 16) + (read_buffer[k+6] << 8) + read_buffer[k+7]
                                cp = pointer(c_int(phasor_tmp))           # make this into a c integer
                                fp = cast(cp, POINTER(c_float))  # cast the int pointer to a float pointer
                                self.phasors_phase2[i] = (fp.contents.value * 180.0) / math.pi        # dereference the pointer, get the float
                                #print(self.phasors_phase2[i])
                            elif j == 3:
                                phasor_tmp = (read_buffer[k] << 24) + (read_buffer[k+1] << 16) + (read_buffer[k+2] << 8) + read_buffer[k+3]
                                cp = pointer(c_int(phasor_tmp))           # make this into a c integer
                                fp = cast(cp, POINTER(c_float))  # cast the int pointer to a float pointer
                                self.phasors_mag3[i] = fp.contents.value         # dereference the pointer, get the float
                                #print(self.phasors_mag3[i])

                                phasor_tmp = (read_buffer[k+4] << 24) + (read_buffer[k+5] << 16) + (read_buffer[k+6] << 8) + read_buffer[k+7]
                                cp = pointer(c_int(phasor_tmp))           # make this into a c integer
                                fp = cast(cp, POINTER(c_float))  # cast the int pointer to a float pointer
                                self.phasors_phase3[i] = (fp.contents.value * 180.0) / math.pi        # dereference the pointer, get the float
                                #print(self.phasors_phase3[i])
                            k += 4


                    # Selecionar pelo combo
                    self.label_freq.setText(str(self.freq))
                    self.label_angle.setText(str(self.phasors_phase0[0]))
                    self.label_mag.setText(str(self.phasors_mag0[0]))

                    if (self.counter > 300):
                        self.overflow = True

                    if self.overflow == True:
                            self.graph_data_x = self.graph_data_x[1:]  # Remove the first y element.
                            self.graph_data_x.append(self.idx)  # Add a new value 1 higher than the last.

                            self.graph_freq.setXRange(self.idx-10.0, self.idx, padding=0)
                            self.graph_phase.setXRange(self.idx-10.0, self.idx, padding=0)

                            self.graph_data_y0 = self.graph_data_y0[1:]  # Remove the first
                            self.graph_data_y0.append(self.freq)  # Add a new random value.

                            self.graph_data_y1 = self.graph_data_y1[1:]  # Remove the first
                            self.graph_data_y1.append(self.phasors_phase0[0])  # Add a new random value.

                            self.graph_data_y2 = self.graph_data_y2[1:]  # Remove the first
                            self.graph_data_y2.append(self.phasors_phase0[1])  # Add a new random value.

                            self.graph_data_y3 = self.graph_data_y3[1:]  # Remove the first
                            self.graph_data_y3.append(self.phasors_phase0[2])  # Add a new random value.

                            #self.graph_data_x.insert(self.counter, self.idx)
                            #self.graph_data_y0.insert(self.counter, self.freq)
                            self.data_line0.setData(self.graph_data_x, self.graph_data_y0, connect="finite")  # Update the data.
                            self.data_line1.setData(self.graph_data_x, self.graph_data_y1, connect="finite")  # Update the data.
                            self.data_line2.setData(self.graph_data_x, self.graph_data_y2, connect="finite")  # Update the data.
                            self.data_line3.setData(self.graph_data_x, self.graph_data_y3, connect="finite")  # Update the data.
                    else:                        
                            self.graph_data_x.insert(self.counter, self.idx)
                            self.graph_data_y0.insert(self.counter, self.freq)
                            self.graph_data_y1.insert(self.counter, self.phasors_phase0[0])
                            self.graph_data_y2.insert(self.counter, self.phasors_phase0[1])
                            self.graph_data_y3.insert(self.counter, self.phasors_phase0[2])
                            pen0 = pg.mkPen(color=(255, 0, 0))
                            pen1 = pg.mkPen(color=(0, 255, 0))
                            pen2 = pg.mkPen(color=(0, 0, 255))
                            if self.data_line0 == 0:
                                self.data_line0 = self.graph_freq.plot(self.graph_data_x, self.graph_data_y0, connect="finite", pen=pen0)
                            else:
                                self.data_line0.setData(self.graph_data_x, self.graph_data_y0, connect='finite')  # Update the data.

                            if self.data_line1 == 0:
                                self.data_line1 = self.graph_phase.plot(self.graph_data_x, self.graph_data_y1, connect="finite", pen=pen0)
                            else:
                                self.data_line1.setData(self.graph_data_x, self.graph_data_y1, connect='finite')  # Update the data.

                            if self.data_line2 == 0:
                                self.data_line2 = self.graph_phase.plot(self.graph_data_x, self.graph_data_y2, connect="finite", pen=pen1)
                            else:
                                self.data_line2.setData(self.graph_data_x, self.graph_data_y2, connect='finite')  # Update the data.

                            if self.data_line3 == 0:
                                self.data_line3 = self.graph_phase.plot(self.graph_data_x, self.graph_data_y3, connect="finite", pen=pen2)
                            else:
                                self.data_line3.setData(self.graph_data_x, self.graph_data_y3, connect='finite')  # Update the data.
                    self.counter += 1
                    self.idx += 0.033


    def on_comboBox_clicked(self):
        index = self.comboBox.currentIndex()
        self.label_phasors.setText(str(self.num_phasors[index]))
        self.label_analogs.setText(str(self.num_analogs[index]))
        self.label_digitals.setText(str(self.num_analogs[index]))

    def on_pushButton_connect_clicked(self):
        self.pressed += 1
        if self.pressed == 1:
            if self.pushButton_connect.text() == 'Connect':
                #print("button_clicked connected")
                if self.connected == 0:
                    self.pushButton_connect.setText('Disconnect')
                    host = self.host_ip.text()
                    port = int(self.host_port.text())
                    addr = (host, port)
                    self.tcpCliSock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
                    self.tcpCliSock.connect((host,port))
                    buffer = b'\xAA\x41\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x01'
                    self.tcpCliSock.send(buffer)
                    buffer = b'\xAA\x41\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x05'
                    self.tcpCliSock.send(buffer)
                    read_buffer = self.tcpCliSock.recv(804)
                    if read_buffer[1] == 49:
                        #print(read_buffer)
                        self.num_pmu = (read_buffer[18] << 8) + read_buffer[19]
                        nom_freq = read_buffer[107]
                        if nom_freq == 0:
                            self.nominal_freq = 60
                        else:
                            self.nominal_freq = 50
                        self.graph_freq.setYRange(self.nominal_freq-2.0, self.nominal_freq+2.0, padding=0)
                        self.label_nfreq.setText(str(self.nominal_freq))

                        #self.station_name = []
                        #self.num_phasors = []
                        #self.num_analogs = []
                        #self.num_digitals = []
                        offset = 0
                        #self.offsets = []
                        self.offsets.append(16)
                        for i in range(0, self.num_pmu):
                            self.station_name.append(str(read_buffer[(20+offset):(36+offset)], 'UTF-8'))
                            self.comboBox.addItem(self.station_name[i])
                            self.num_phasors.append((read_buffer[40+offset] << 8) + read_buffer[41+offset])
                            self.num_analogs.append((read_buffer[42+offset] << 8) + read_buffer[43+offset])
                            self.num_digitals.append((read_buffer[44+offset] << 8) + read_buffer[45+offset])
                            offset = offset + 30 + self.num_phasors[i]*16 + self.num_phasors[i]*4
                            self.offsets.append(10+self.num_phasors[i]*8+self.offsets[i])
                            #print(self.offsets[i])

                        for j in range(0, self.num_pmu):
                            for i in range(0, self.num_phasors[j]):
                                if j == 0:
                                    self.phasors_mag0.append(0.0)
                                    self.phasors_phase0.append(0.0)
                                    self.phasor_name0.append(str(read_buffer[(46+16*i):(62+16*i)], 'UTF-8'))
                                    #print(self.phasor_name0[i])
                                elif j == 1:
                                    self.phasors_mag1.append(0.0)
                                    self.phasors_phase1.append(0.0)
                                    self.phasor_name1.append(str(read_buffer[(88+self.num_phasors[j-1]*16+16*i):(104+self.num_phasors[j-1]*16+16*i)], 'UTF-8'))
                                    #print(self.phasor_name1[i])
                                elif j == 2:
                                    self.phasors_mag2.append(0.0)
                                    self.phasors_phase2.append(0.0)
                                    self.phasor_name2.append(str(read_buffer[(206+self.num_phasors[j-1]*16+16*i):(222+self.num_phasors[j-1]*16+16*i)], 'UTF-8'))
                                    #print(self.phasor_name2[i])
                                elif j == 3:
                                    self.phasors_mag3.append(0.0)
                                    self.phasors_phase3.append(0.0)
                                    self.phasor_name3.append(str(read_buffer[(436+self.num_phasors[j-1]*16+16*i):(452+self.num_phasors[j-1]*16+16*i)], 'UTF-8'))
                                    #print(self.phasor_name3[i])
                        
                        self.comboBox.setCurrentIndex(0)
                        self.label_phasors.setText(str(self.num_phasors[0]))
                        self.label_analogs.setText(str(self.num_analogs[0]))
                        self.label_digitals.setText(str(self.num_analogs[0]))
                        
                        for i in range(0, self.num_phasors[0]):
                            self.comboBox_2.addItem(self.phasor_name0[i])
                        self.comboBox_2.setCurrentIndex(0)


                        self.connected = 1
                        self.graph_freq.setXRange(0.0, 10.0, padding=0)
                        buffer = b'\xAA\x41\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x02'
                        self.tcpCliSock.send(buffer)
                        self.timer1.start(10)
                    else:
                        self.connected = 0
                        self.tcpCliSock.close()

            else:
                #print("button_clicked disconnected")
                self.connected = 0
                self.timer1.stop()
                self.tcpCliSock.close()
                self.counter = 0
                self.idx = 0.0
                self.overflow = False
                self.graph_data_x.clear()
                self.graph_data_y0.clear()
                self.graph_data_y1.clear()
                self.graph_data_y2.clear()
                self.graph_data_y3.clear()
                self.graph_freq.clear()
                self.graph_phase.clear()
                self.comboBox.clear()
                self.data_line0 = 0
                self.data_line1 = 0
                self.data_line2 = 0
                self.data_line3 = 0
                self.pushButton_connect.setText('Connect')
        else:
            #print(self.pressed)
            if self.pressed == 3:
                self.pressed = 0 

            


app=QApplication(sys.argv)
widget=MainWindow()
widget.show()
sys.exit(app.exec_())
