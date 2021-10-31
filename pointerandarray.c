#include <stdio.h>
int main()
{
    int i=3, *x;
    float j=1.5, *y;
    char k='c', *z;

    printf("Value of i=%d\n",i);
    printf("Value of j=%f\n",j);
    printf("Value of k=%c\n",k);
    x=&i;
    y=&j;
    z=&k;
    printf("The original address of x=%u\n",x);
    printf("The original address of y=%u\n",y);
    printf("The original address of z=%u\n",z);
    x++;
    y++;
    z++;
    printf("New address of x=%u\n",x);
    printf("New address of y=%u\n",y);
    printf("New address of z=%u\n",z);
    return 0;
}