#include <stdio.h>


/*         *
 *        ***
 *       *****
 *
 * */
void piramide(int n)
{
    int w, s, i, j;

    w = n-1;
    s = 1;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < w; j++)
            putchar(' ');
        w--;
        for (j = 0; j < s; j++)
            putchar('*');
        s += 2;
        putchar('\n');
    }

}

int main(int argc, char *argv[])
{
    piramide(5);
    return 0;
}
