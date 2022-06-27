# Sensor data Logger (CSV)
# by Marcelo Rovai @ 13July21

import serial

arduino_port = '/dev/cu.usbmodem145101'
baud_rate = 115200
ser = serial.Serial(port=arduino_port, baudrate=baud_rate)

fileName = "acc_test_data.csv"  # name of the CSV file generated

first_line = 'timestamp,accX,accY,accZ'
file = open(fileName, "w")
file.write(first_line + "\n")  # write data with a newline
file.close()

Freq_hz = 50 
num_seconds = 10  # number of seconds collecting data
samples = num_seconds * Freq_hz # number of samples to collect

sample = 0
while sample <= samples:
    getData = str(ser.readline())
    data = getData[2:][:-5]
    print(data)

    file = open(fileName, "a")
    file.write(str(sample) + "," + data + "\n")
    sample = sample+1
print("Data collection complete!")
file.close()