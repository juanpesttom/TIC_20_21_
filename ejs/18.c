#include <stdio.h>

char *concat_nombre(char *nombre, char *apellido1, char *apellido2)
{
    printf("%p\n", &nombre);
    while (*nombre != '\0')
    {
        printf("entered\n");
        nombre++;
    }
    printf("%p\n", &nombre);
    *nombre++ = ' ';

    while (*apellido1 != '\0')
        *nombre++ = *apellido1++;    
    *nombre++ = ' ';

    while (*apellido2 != '\0')
        *nombre++ = *apellido2++;
    *nombre = '\0';
}
int main(int argc, char *argv[])
{
    char nombre[30] = "asd";
    printf("%s\n", concat_nombre(nombre, "bddc", "cdd"));
    return 0;
}
