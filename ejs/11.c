#include <stdio.h>
#include <string.h>

void cantidad(char *p, int len)
{
    if (strlen(p) == len)
        printf("Tiene la misma longitud\n");
    else
        printf("No tiene la misma longitud\n");
}

int main(int argc, char *argv[])
{
    cantidad("hola", 3);
    return 0;
}
