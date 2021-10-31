#include <stdio.h>
void swap(int *, int *);
int main()
{
    int a,b;
    printf("Enter the value of A:\n");
    scanf("%d",&a);
    printf("Enter the value of B:\n");
    scanf("%d",&b);
    printf("Values before swapping:\n");
    printf("Value for A is %d.\n",a);
    printf("Value for B is %d.\n",b);
    swap(&a, &b);
    printf("Values after swapping:\n");
    printf("Value for A is %d.\n",a);
    printf("Value for B is %d.\n",b);

    return 0;
}

void swap(int *x, int *y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
}