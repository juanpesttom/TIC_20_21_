#include <stdio.h>

void numero_a_cadena(int numero, char *vector)
{
    int i, len, num_copia;
            
    num_copia = numero;
    for (i = -1; num_copia != 0; i++)
        num_copia = num_copia/10;
    len = i;

    for (i; numero != 0; i--)
    {
        vector[i] = numero % 10 + '0';
        numero = numero / 10;                             
    }
    vector[++len] = '\0';                    
}

int main(void)
{
    char vector[6];
    numero_a_cadena(25565,vector);
    printf("%s\n", vector);            
}

