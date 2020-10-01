#include <stdio.h>

int multiplicacion(int n1,int n2,int n3,int n4)
{
    return n1*n2*n3*n4;
}

int main(int argc, char *argv[])
{
    printf("%d\n", multiplicacion(2,3,4,5));

    return 0;
}
