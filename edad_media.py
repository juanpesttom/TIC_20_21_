#Escribe un programa que lea las edades de 10
#alumnos y devuelva la edad del mayor, la edad
#del menor, la edad media y la diferencia de edades
#entre el mayor y el menor.

def edad_media():
    edades = [input("Introduce edad %d: " % (i)) for i in range(1,11)]

    print "Edad el mayor:", max(edades)
    print "Edad del menor:", min(edades)
    print "Edad media:", sum(edades)/len(edades)
    print "Diferencia de edades entre el mayor y el menor:", max(edades)-min(edades)

if __name__ == "__main__":
    edad_media()

