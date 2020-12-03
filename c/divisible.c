#include <stdio.h>

int esPoliDivisible(int n)
{
    static int arr[4] = {2,3,5,7};
    int i;

    for (i = 0; i < 4; i++)
        if (n % arr[i] != 0)
            return 0;
    return 1;
}

int main()
{
    printf("%d\n", esPoliDivisible(2*3*5*7));

    return 0;
}
