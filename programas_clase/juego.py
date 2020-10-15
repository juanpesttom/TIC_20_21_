import random

def adivinar_numero():
    n = random.randint(1,10)

    while True:
        guess = input("Introduce un numero del 1 al 10: ")
        if guess < n:
            print "El numero introducido es menor"
        elif guess > n:
            print "El numero introducido es mayor"
        else:
            print "Acertaste!"
            break;
adivinar_numero()
