#include <stdio.h>
#include <string.h>

void swap(char *p1, char *p2)
{
    char p[strlen(p1+1)];

    strcpy(p, p1);
    strcpy(p1, p2);
    strcpy(p2, p);
    
    
}
void bubblesort(char **p)
{
    int i, j;

    for (i = 1; i < 10; i++)
        for (j = 0; j < 10-i-1; j++)
            if (strlen(p[j]) > strlen(p[j+1]))
                swap(p[j], p[j+1]);
}
int main(int argc, char *argv[])
{
    return 0;
}
