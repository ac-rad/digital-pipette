import serial

ser = serial.Serial('/dev/ttyACM0', 9600, timeout=1)
ser.readline()

up = True
while True:
    data = ser.readline()
    if up:
        command = 'a'
    else:
        command = '0'
    ser.write(bytes(command, 'utf-8'))
    up = not up
ser.close()
