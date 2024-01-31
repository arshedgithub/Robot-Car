import serial
import time

# connect to arduino via serial ( COM port may vary )
arduino = serial.Serial(port='COM8', baudrate=9600, timeout=.1)

# 2 seconds to settle up the connection
time.sleep(2) 

try:
    serial.write(b'1')
    print("i am gaveesh")

except KeyboardInterrupt:
    print("Programme terminated...")

except:
    print("Something Wrong...")

finally:
    arduino.close()