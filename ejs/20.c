#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int comprobar_dni(char *p)
{
    int dni;
    char c, letra[] = "TRWAGMYFPDXBNJZSQVHLCKE";
    
    c = *(p+strlen(p)-1);
    dni = atoi(p);
    dni %= 23;
    
    if (letra[dni] == c)
        return 0;
    return 1;

}
int main(int argc, char *argv[])
{
    printf("%d\n", comprobar_dni("30065089H"));
    return 0;
}
