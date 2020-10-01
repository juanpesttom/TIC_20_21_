#include <stdio.h>

#define GENERAL          0.16
#define REDUCIDO        0.07
#define SUPERREDUCIDO   0.04

float calcular_iva(float n, float iva)
{
    return n+n*iva;
}
int main(int argc, char *argv[])
{
    printf("%f\n", calcular_iva(100, GENERAL));
    return 0;
}
