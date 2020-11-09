#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int num_vocales(char *p)
{
    int n, i;
    char c;
    
    n = i = 0;
    while (p[i] != '\0')
    {   
        c = tolower(p[i++]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            n++;
    }
    return n;
}

int sortfunct(const void *v1,const void *v2)
{
    char **p1 = (char **) v1;
    char **p2 = (char **) v2;
    
    return num_vocales(*p1) - num_vocales(*p2);
}

void ordenar_vocales(char *p[10])
{
    qsort(p, 10, sizeof(char *), sortfunct);
}

int main(int argc, char *argv[])
{
    char *p[10] = {
        "aaaaaaaaaa",
        "aaaaaaaaa",
        "aaaaaaaa",
        "aaaaaaaaaa",
        "aaaasdfsasdf",
        "aasdfgs",
        "afgbdfgh",
        "efgfg",
        "ifgjf",
        "a",
    };
    int i;
    ordenar_vocales(p);

    for (i = 0; i < 10; i++)
        printf("%s\n", p[i]);
    return 0;
}
