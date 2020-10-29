#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void rellenar(char M[3][3])
{
    static char letras[3] = {'A', 'B', 'C'};
    int i, j;
    
    srand(time(NULL));
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            M[i][j] = letras[rand() % 3];
    
}
int main(int argc, char *argv[])
{
    char M[3][3];
    int i,j;

    rellenar(M);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            putchar(M[i][j]);
        putchar('\n');
    }
    return 0;
}
