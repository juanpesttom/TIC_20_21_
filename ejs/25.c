#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

bool suma_4(int M[4][4])
{
    int i, j, sum;
    
    sum = 0;
    for (i = 0; i < 4; i++, sum = 0)
    {
        for (j = 0; j < 4; j++)
            sum += M[i][j];
        if (sum == 4)
            return true;
    }
    
    sum = 0;
    for (i = 0; i < 4; i++, sum = 0)
    {
        for (j = 0; j < 4; j++)
            sum += M[j][i];
        if (sum == 4)
            return true;
    }
    return false;
}

void rellenar_ceros(int M[4][4])
{
    int i, j;
    
    srand(time(NULL));
    do {
        for (i = 0; i < 4; i++)
            for (j = 0; j < 4; j++)
                M[i][j] = rand() % 2;
    } while (suma_4(M));
}


int main(int argc, char *argv[])
{
    int M[4][4], i, j;

    rellenar_ceros(M);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
            printf("%d ", M[i][j]);
        putchar('\n');
    }
    return 0;
}
