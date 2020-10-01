#include <stdio.h>
#include <stdlib.h>

int op(int n1, int n2, char c)
{
    switch(c)
    {
        case 'S':
            return n1+n2;
            break;
        case 'R':
            return n1-n2;
            break;
        case 'M':
            return n1*n2;
        case 'D':
            if (n2 == 0)
            {
                fprintf(stderr, "zero division error");
                exit(1);
            }
            return n1/n2;
            break;
        default:
            return 0;
            break;
    }
}
int main(int argc, char *argv[])
{
    printf("%d\n", op(3,4, 'S'));
    return 0;
}
