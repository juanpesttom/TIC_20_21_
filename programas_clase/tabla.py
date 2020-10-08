def tabla():
	n = input("Dime la tabla: ")

	for i in [n*j for j in range(0,11)]:
		print "%d" % (i)

tabla()