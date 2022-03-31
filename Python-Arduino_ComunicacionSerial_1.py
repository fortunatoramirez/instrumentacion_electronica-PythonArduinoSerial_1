import serial

print("Conectando al Arduino...")
arduino = serial.Serial('COM6', 9600, timeout = 3.0)
print("Conectado al Arduino.")

while True:
    comando = input('Introduzca el comando: ')
    arduino.write(comando.encode())