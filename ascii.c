#include <stdio.h>
int main()
{
    int i;
    printf("ASCII values are:\n");
    printf("N - ASCII\n");
    for ( i = 0; i <=255; i++)
    {
        printf("%c - %d\n",i,i);
    }
    
    return 0;
}