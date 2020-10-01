#include <stdio.h>

char *meses[] = {
    "",
    "Enero",
    "Febrero",
    "Marzo",
    "Abril",
    "Mayo",
    "Junio",
    "Julio",
    "Agosto",
    "Septiembre",
    "Octubre",
    "Noviembre",
    "Diciembre"
};

int fecha_formateada(int d, int m, int y)
{
    if (m < 1 || m > 12)
        return -1;
    printf("%d de %s de %d\n", d, meses[m], y);
    return 0;
}



int main(int argc, char *argv[])
{
    fecha_formateada(1, 3, 2009);

    return 0;
}
