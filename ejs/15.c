#include <stdio.h>
#include <ctype.h>

int posicion(char *p)
{
    return tolower(*p)-'a'+1;
}
int main(int argc, char *argv[])
{
    printf("%d\n", posicion("a"));
    return 0;
}
