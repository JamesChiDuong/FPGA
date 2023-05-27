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

def ReceivingData():
    global uart
    uart = True
    port = "COM5"
    ser = serial.Serial(port, 115200)
    while uart:
        data = ser.readline()
        data_sensor = data.decode('utf8')
        data_Send = '{' +"rainfall" + ':' + data_sensor +'}'
        r= requests.put(url,data=json.dumps(data_Send))
        print("Data:",data_sensor)

t1 = threading.Thread(target=ReceivingData)
t1.daemon = True
t1.start()

while True:
    key = input("Press Q to exit\n")
    if key == 'q':
        uart = False
        break