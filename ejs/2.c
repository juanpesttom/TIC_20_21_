#include <stdio.h>

#define EUR 1.13

int cambio(int n)
{
    return n*EUR;
}
int main(int argc, char *argv[])
{
    printf("%d\n", cambio(3));

    return 0;
}
