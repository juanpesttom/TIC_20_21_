#include <stdio.h>
#include <string.h>

void swap(char p1, char p2)
{
    char c;

    c = p1;
    p1 = p2;
    p2 = c;
}
void reverse(char *p)
{
    int i, j;
    
    i = 0;
    j = strlen(p)-1;

    while (i < j)
        swap(p[i++], p[j--]);
}

char *itos(int n, char *p)
{
    int i = 0;

    while (n != 0)
    {
        p[i++] = (n % 10) + '0';
        n /= 10;
    }
    p[i] = '\0';
    return p;
}
int main(int argc, char *argv[])
{
    char arr[20];
    printf("%s\n", itos(123, arr));
    return 0;
}
