import random

def contrasena():
    nombre = raw_input("Introduce tu nombre: ")
    apellido = raw_input("Introduce tu apellido: ")

    print nombre[:3]+apellido[:3]+str(random.randint(0,9))

if __name__ == '__main__':
    contrasena()

