#include <stdio.h>
#include <ctype.h>

#define NUM_PALABRAS 5

int contara(char *p)
{
    int i;
    
    for (i = 0; *p != 0; p++)
    {
        if (tolower(*p) == 'a')
            i++;
    }
    return i;
}

char *contar_a(char **l)
{
    char *p = NULL;
    int maxlen, i, j;

    maxlen = 0;
    for (i = 0; i < NUM_PALABRAS; i++)
        if ((j = contara(l[i])) > maxlen)
        {
            maxlen = j;
            p = l[i];
        }
    return p;
}
int main(int argc, char *argv[])
{
    char *l[5] = {
        "a",
        "aa",
        "aaa",
        "aaaa",
        "aaaaa",
    };
    printf("%s\n", contar_a(l));
    return 0;
}
