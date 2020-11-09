#include <stdio.h>
#include <stdlib.h>

#define LEN 5

// Devuelve un puntero al mayor número de un vector
int *mayor_int(int *p, int len)
{
    int h, i, *n;
    i = 0;
    h = p[i];

    for (i += 1; i < len; i++)
        if (p[i] > h)
            h = p[i];
    n = malloc(sizeof(int));
    *n = h;
    return n;
}

int main(int argc, char *argv[])
{
    int *p;
    int l[LEN] = {1,2,3,4,5};

    p = mayor_int(l, LEN);
    printf("%d\n", *p);
    free(p);
    return 0;
}
