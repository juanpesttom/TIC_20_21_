#include <stdio.h>
#include <string.h>

void bubblesort(char **p)
{
    int i, j, n = 10;
    char *aux;

    for (i = 0; i < n-1; i++)
        for (j = i+1; j < n; j++)
            if (strlen(p[i]) > strlen(p[j])) 
            {
                aux = p[i];
                p[i] = p[j];
                p[j] = aux;

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
