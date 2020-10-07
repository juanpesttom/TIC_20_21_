#include <stdio.h>

int suma_digitos(int n)
{
    int suma = 0, i, j;
    
    do {
        i = n % 10;
        n = n / 10;
        suma += i;
    } while (i != 0);
    return suma;
}

int main(int argc, char *argv[])
{
    printf("%d\n", suma_digitos(1234));
    return 0;
}
