#include <stdio.h>

char *l_ordinales[] = 
{
    "",
    "primero",
    "segundo",
    "tercero",
    "cuarto",
    "quinto",
    "sexto",
    "septimo",
    "octavo",
    "noveno",
};

char *ordinal(int n)
{
    return (n <= 10) ? l_ordinales[n] : NULL;
}

int main(int argc, char *argv[])
{
    printf("%s\n", ordinal(2));
    return 0;
}
