#include <stdio.h>
int i;
void increment();
void decrement();
int main()
{
    printf("i=%d\n",i);
    increment();
    increment();
    decrement();
    decrement();
    return 0;
}
void decrement()
{
    i=i-1;
    printf("On decrementing i=%d\n",i);
}
void increment()
{
    i=i+1;
    printf("On incrementing i=%d\n",i);
}