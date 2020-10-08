def sustituir():
    frase = raw_input("Escribe la frase: ")
    nueva_frase = ""

    for c in frase:
        if c.lower() in "aeiou":
            nueva_frase += 'u'
        else:
            nueva_frase += c
    print(nueva_frase)

sustituir()


