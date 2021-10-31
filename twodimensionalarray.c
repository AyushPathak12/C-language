#include <stdio.h>
int main(int argc, char const *argv[])
{
    int sub[2][3], i, j;
    // int total = 0;
    printf("Enter 6 values:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d\n", &sub[i][j]);
        }
    }
    printf("Values are:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d", sub[i][j]);
            // total = total + sub[i][j];
        }
        // printf("\t %d", total);
        // total = 0;
        printf("\n");
    }
    return 0;
}
