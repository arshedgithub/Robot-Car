import serial
import time

# connect to arduino via serial ( COM port may vary )
arduino = serial.Serial(port='COM8', baudrate=9600, timeout=.1)

# 2 seconds to settle up the connection
time.sleep(2) 

try:
    serial.write(b'1')
    time.sleep(2)
    serial.write(b'0')

except KeyboardInterrupt:
    print("Programme terminated...")

except:
    print("Something Wrong...")

finally:
    arduino.close()