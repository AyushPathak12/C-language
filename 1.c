#include <stdio.h>
int main(int argc, char const *argv[])
{
    int k;
    int num;
    printf("Enter the value of num:\n");
    scanf("%d",&num);
    k = (num > 5 ? (num <= 10 ? 100 : 200) : 500);
    printf("The value of k is %d.\n", k);
    return 0;
}
