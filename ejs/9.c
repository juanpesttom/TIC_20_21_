#include <stdio.h>

float calcular_salario(float h)
{
    float n, m = 30;
    
    return (h <= 40) ? h * m : 40*m + (h-40)*m*1.5;


}

int main(int argc, char *argv[])
{
    printf("%f\n", calcular_salario(41));
    return 0;
}
