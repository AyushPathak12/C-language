#include <stdio.h>
int main()
{
    int marks[3];
    int *point[3];
    int i;
    printf("Enter the values in array.\n");
    printf("Enter three valuess..   \n");

    for (i = 0; i < 3; i++)
    {

        scanf("%d\n", &marks[i]);
    }

    for (i = 0; i < 3; i++)
    {
        printf("%d\n", marks[i]);
        point[i] = &marks[i];
    }

    for (i = 0; i < 3; i++)
    {
        printf("%d\n", point[i]);
    }

    return 0;
}