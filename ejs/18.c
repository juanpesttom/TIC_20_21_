#include <stdio.h>

char *concat_nombre(char *nombre, char *apellido1, char *apellido2)
{
    int i, j;

    for (i = 0; nombre[i] != '\0'; i++)
        ;
    nombre[i++] = ' ';
    for (j = 0; apellido1[j] != '\0'; j++)
        nombre[i++] = apellido1[j];
    nombre[i++] = ' ';
    for (j = 0; apellido2[j] != '\0'; j++)
        nombre[i++] = apellido2[j];
    nombre[i] = '\0';

    return  nombre;
}

int main(int argc, char *argv[])
{
    char nombre[30] = "asd";
    printf("%s\n", concat_nombre(nombre, "bddc", "cdd"));
    return 0;
}
