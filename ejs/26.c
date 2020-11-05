#include <stdio.h>
#include <string.h>

void bubblesort(char **p)
{
    int i, j, n = 10;
    char *aux;

    for (i = 1; i < n; i++)
        for (j = 0; j < (n-i); j++)
            if (strlen(p[j]) > strlen(p[j+1]))
            {
                aux = p[j];
                p[j] = p[j+1];
                p[j+1] = aux;
            }
}
int main(int argc, char *argv[])
{
    int i;
    char *M[10] = {
        "aaaaaaaaaa",
        "aaaaaaaaa",
        "aaaaaaaa",
        "aaaaaaa",
        "aaaaaa",
        "aaaaa",
        "aaaa",
        "aaa",
        "aa",
        "a",
    };
    bubblesort(M);
    for (i = 0; i < 10; i++)
            puts(M[i]);
    return 0;
}
