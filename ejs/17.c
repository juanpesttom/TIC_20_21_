#include <stdio.h>

int billetes(int n)
{
    int b500, b200, b100, b50, b20, b10, b5, m2, m1;

    if (n < 5 || n > 500)
        return -1;
    
    printf("Precio del producto: %d\n", n);
    b500 = n / 500;
    n -= 500 * b500;

    b200 = n / 200;
    n -= 200 * b200;

    b100 = n / 100;
    n -= 100 * b100;

    b50 = n / 50;
    n -= 50 * b50;

    b20 = n / 20;
    n -= 20 * b20;

    b10 = n / 10;
    n -= 10 * b10;
    
    b5 = n / 5;
    n -= 5 * b5;
    
    m2 = n / 2;
    n -= 2 * m2;

    m1 = n;
    printf("Billetes de 500: %d\n", b500);
    printf("Billetes de 200: %d\n", b200);
    printf("Billetes de 100: %d\n", b100);
    printf("Billetes de 50: %d\n", b50);
    printf("Billetes de 20: %d\n", b20);
    printf("Billetes de 10: %d\n", b10);
    printf("Billetes de 5: %d\n", b5);
    printf("Monedas de 2: %d\n", m2);
    printf("Monedas de 1: %d\n", m1);
}

int main(int argc, char *argv[])
{
    billetes(499);
    return 0;
}
