def piramide():
	n = input("Altura del triangulo: ")

	i = 1;

	for j in range(n-1, -1, -1):
		print " " * j + "*" * i
		i += 2

piramide()