def contrasena():
    nombre = raw_input("Introduce un nombre: ")
    apellidos = raw_input("Introduce un apellido: ")

    print nombre[-3:] + apellidos[-3:]

contrasena()
