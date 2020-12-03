#include <stdio.h>

int par(int n)
{
    if (n % 2 == 0)
        return 1;
    return 0;
}

int main(void)
{
    printf("%d\n", par(3));

    return 0;
}
