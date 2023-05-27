#!/usr/bin/env python3
import serial
import sys
from http.server import HTTPServer, BaseHTTPRequestHandler
import time
#Inform you port example:/dev/pts/2
# dev = serial.Serial("COM5", 115200)  #Open serial port
# message = "ADC-100-1000000\r\n"      #Format message
# print("Send Data: ",message)
# dev.write(message.encode())               #Send message throuhg Serial Port
# dataRaw = dev.readline()                  #Waiting to read data

# data = dataRaw.decode('utf8')             #Decode to string
# print("Received Data: ",data)             #print
HOST = "localhost"
PORT = 9999
class NeuralHTTP(BaseHTTPRequestHandler):
    def do_GET(self):
        self.send_response(200)
        self.send_header("Content-type","text/html")
        self.end_headers()

        self.wfile.write(bytes("<html><body><h1>HELLO WORLD!</h1></body></html>","utf-8"))
    def do_POST(self):
        self.send_response(200)
        self.send_header("Content-type","application/json")
        self.end_headers()

        date = time.strftime("%Y-%m-%d %H:%M:%S",time.localtime(time.time()))
        self.wfile.write(bytes('{"time":' + date + '"}',"utf-8"))


server = HTTPServer((HOST,PORT),NeuralHTTP)
print("Server is running now")
server.serve_forever()
server.server_close()
print("Server is stopped")