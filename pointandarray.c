#include <stdio.h>
int main()
{
    int *p;
    int arr[5], i, total = 0;
    printf("Enter  elements:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d\n", &arr[i]);
    }
    p = arr;
    printf("Elements are:\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d\n", *p);
        total = total + *p;
        p++;
    }
    printf("Total =%d\n", total);

    return 0;
}