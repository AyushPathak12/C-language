#include <stdio.h>
int main()
{
    int arr1[5], arr2[5], arr3[5], arr4[5], i;
    printf("Enter five values in first array:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d\n", &arr1[i]);
    }
    printf("Enter five values in secondary array:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d\n", &arr2[i]);
    }
    for (i = 0; i < 5; i++)
    {
        arr3[i] = arr1[i] + arr2[i];
    }
    printf("Addition of two entered array is:\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d\n", arr3[i]);
    }
    // for (i = 0; i < 5; i++)
    // {
    //     arr4[i] = arr1[i] * arr2[i];
    // }
    // printf("Addition of two entered array is:\n");
    // for (i = 0; i < 5; i++)
    // {
    //     printf("%d\n", arr4[i]);
    // }

    return 0;
}