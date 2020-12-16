#include <stdio.h>


/*         *
 *        ***
 *       *****
 *
 * */
void piramide(int n)
{
    int w, s, i, j, w_cpy;
    char buff[BUFSIZ];
    
    printf("Introduce la frase: ");
    fgets(buff, BUFSIZ, stdin);

    w = w_cpy = n-1;
    s = 1;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < w; j++)
            putchar(' ');
        w--;
        printf("\033[32m");
        for (j = 0; j < s; j++)
            putchar('*');
        printf("\033[0m");
        s += 2;
        putchar('\n');
    }
    for(i = 0; i < s-2; i++)
        putchar('-');
    putchar('\n');
    for(i = 0; i < 2; i++)
    {
        for (j = 0; j < w_cpy; j++)
            putchar(' ');
        printf("*\n");
    }
    printf("%s", buff);
}

int main(int argc, char *argv[])
{
    piramide(15);
    return 0;
}
