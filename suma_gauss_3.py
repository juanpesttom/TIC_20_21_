def suma_gauss_3():
    n = input("Introduce el numero final: ")
    print sum([x for x in range(1, n+1) if x % 2 == 0])

if __name__ == '__main__':
    suma_gauss_3()

