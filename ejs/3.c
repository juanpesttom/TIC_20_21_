#include <stdio.h>

int fecha(int n)
{
    static char *fechas[] = {
        "",
        "lunes",
        "martes",
        "miercoles",
        "jueves",
        "viernes",
        "sábado",
        "domingo"
    };
    
    if (n > 7 || n < 1)
        return -1;
    printf("%s\n", fechas[n]);
    return n;
}
int main(int argc, char *argv[])
{
    fecha(2);
    return 0;
}
