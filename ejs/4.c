#include <stdio.h>

char *meses[] = {
    "",
    "enero",
    "febrero",
    "marzo",
    "abril",
    "mayo",
    "junio",
    "julio",
    "agosto",
    "septiembre",
    "octubre",
    "noviembre",
    "diciembre",
};

char *mes(int n){
    if (n > 12 || n < 1)
        return NULL;
    return meses[n];
}

int main(int argc, char *argv[])
{
    printf("%s\n", mes(3));
    return 0;
}
