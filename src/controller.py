import serial
import time

# Open a serial port
ser = serial.Serial('/dev/ttyACM0', 9600, timeout=1)
time.sleep(1)
print(ser.readline())

# Length that corresponds each volume
len_0mL = '1820'
len_1mL = '1755'
len_5mL = '1528'
len_10mL = '1286'

# Initialize
ser.write(bytes(len_0mL, 'ascii'))
time.sleep(5)
print(ser.readline())

for _ in range(5):
    # Aspirate 5 mL
    ser.write(bytes(len_5mL, 'ascii'))
    time.sleep(5)
    print(ser.readline())
    # Dispense liquid
    ser.write(bytes(len_0mL, 'ascii'))
    time.sleep(5)
    print(ser.readline())
ser.close()
