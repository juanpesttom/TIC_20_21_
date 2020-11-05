#include <stdio.h>

int tresenralla(char p[3][3])
{
    int i, j;

    for (i = 0, j = 0; i < 3; i++)
        if (p[i][j] == p[i][j+1] && p[i][j] == p[i][j+2])
            goto check;
    for (j = 0, i = 0; j < 3; j++)
        if (p[i][j] == p[i+1][j] && p[i][j] == p[i+2][j])
            goto check;
    if ((p[0][0] == p[1][1] && p[0][0] == p[2][2]) ||
        (p[2][2] == p[1][1] && p[2][2] == p[0][0]))
        {
            if (p[0][0] == 'O')
                return -1;
            return 1;
        }   
    return 0;
check:
    if (p[i][j] == 'O')
        return -1;
    return 1;
}

int main(int argc, char *argv[])
{
    char p[3][3] = {
        {'X', 'X', 'X'},
        {'X', 'O', 'O'},
        {'O', 'X', 'X'},
    };
    printf("%d\n", tresenralla(p));
    return 0;
}
