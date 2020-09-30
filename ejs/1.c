#include <stdio.h>

int multiplicacion(n1, n2, n3, n4)
{
    return n1*n2*n3*n4;
}

int main(int argc, char *argv[])
{
    printf("%d\n", multiplicacion(2,3,4,5));

    return 0;
}
