import serial
from ctypes import cdll, c_long, c_int, c_char_p, create_string_buffer
import numpy as np
import threading
import struct
from ctypes import *

ser = serial.Serial()

ser = serial.Serial('/dev/ttyACM0', 115200, timeout=20)  # open serial port


while 1:
    init_char = ser.read(1)
    while (init_char != b'$'):
           init_char = ser.read(1)
    print('Novo Frame')
    data = ser.read(274)

    for x in range(68):
        value_tmp = (data[(x*4)+3] << 24) + (data[(x*4)+2] << 16) + (data[(x*4)+1] << 8) + data[(x*4)+0]
        cp0 = pointer(c_int(value_tmp))           # make this into a c integer
        fp0 = cast(cp0, POINTER(c_float))  # cast the int pointer to a float pointer
        value_float = fp0.contents.value         # dereference the pointer, get the float
        print(value_float)

    print('  ')

serial.close()

