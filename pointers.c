#include <stdio.h>
int main()
{
    printf("Lets learn about pointerss..\n");
    int a;
    int* ptra=&a;
    int*ptr2=NULL;
    printf("Enter a value:");
    scanf("%d",&a);
    printf("address of pointer to entered value is %p.\n",&ptra);
    printf("address of entered value is %p.\n", &a);
    printf("address of entered value is %p.\n",ptra);
    printf("adress of some garbage is %p.\n",ptr2);
    printf("entered value is %d.\n",*ptra);
    printf("entered value is %d.\n",a);
    return 0;
}