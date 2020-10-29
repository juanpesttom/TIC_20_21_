#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int contains(char M[3][3], int a, int b, int n)
{
    int i, j;

    for (i = 0; i < a; i++)
        for (j = 0; j < b; j++)
            if (M[i][j] == n)
                return 1;
    return 0;
}

void rellenar(char M[3][3])
{
    int i, j, k = 0, n;
    
    srand(time(NULL));
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
        {
            do {
                n = rand() % 9 +1;
                printf("entered\n");
            }
            while (contains(M, i, j, n));
            M[i][j] = n;
        }
    
}
int main(int argc, char *argv[])
{
    char M[3][3];
    int i,j;

    rellenar(M);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            printf("%d ", M[i][j]);
        putchar('\n');
    }
    return 0;
}
