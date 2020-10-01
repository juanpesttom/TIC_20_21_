#include <stdio.h>

#define EUR 0.85

float cambio(float n)
{
    return n*EUR;
}
int main(int argc, char *argv[])
{
    printf("%f\n", cambio(3.0));

    return 0;
}
