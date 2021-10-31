/*WITHOUT ARGUMENT AND WITH RETURN VALUE*/
#include <stdio.h>
int takenumber() 
{
    int i;
    printf("Enter a number.\n");
    scanf("%d",&i);
    return i;
}
int main()
{
    int c;
    c=takenumber();
    printf("The number entered is %d\n",c);
    return 0;
}
