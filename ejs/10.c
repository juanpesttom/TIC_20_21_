#include <stdio.h>

void mostrar_numeros(int n)
{
    printf("%d %d %d\n", n-3, n-2, n-1);
    printf("%d %d %d\n", n+1, n+2, n+3);
}
int main(int argc, char *argv[])
{
    mostrar_numeros(5);
    return 0;
}
