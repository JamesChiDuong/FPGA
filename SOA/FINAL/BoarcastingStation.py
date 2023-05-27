import serial
import curses
import threading
import signal
import sys
import time

import requests
import json
url = 'https://soa-rainbroadcasting-default-rtdb.firebaseio.com/RainStation.json'

global uart
WARNING = "WARNING!!!!\n"
def TransferData():
    global uart
    uart = True
    port = "COM3"
    ser = serial.Serial(port, 115200)
    while uart:
        r= requests.get(url)
        data = r.text.split(':')
        data1 = data[1].split('}')
        data2 = data1[0].split('\\')
        number = int(data2[0])
        print("HTTP Receive: ",r.text)
        if(number > 60):
             ser.write(WARNING.encode())
             ser.write('\r'.encode())
             dataRaw = ser.readline()
             print("STM32 Response: ",dataRaw)
        time.sleep(2)

t1 = threading.Thread(target=TransferData)
t1.daemon = True
t1.start()

while True:
    key = input("Press Q to exit\n")
    if key == 'q':
        uart = False
        break