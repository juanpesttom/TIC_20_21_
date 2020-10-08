'Abreviacion de mes'

def mes():
    abreviaturaMes = "EneFebMarAbrMayJunJulAgoSepOctNovDic"
    n = input("Introduce el numbero: ")
    index = slice((n-1)*3, (n-1)*3+3)
    print abreviaturaMes[index]

mes()

