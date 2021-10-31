/*Simple Multipliction,Addition,Substraction and division of two numbers*/
#include <stdio.h>
int main()  
{
    int choice;
    int num1,num2;

    printf("1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.Multiplication\n");
    printf("4.Division\n");
    printf("Choose any one of the option:");
    scanf("%d",&choice);

    switch(choice)
    {

        case 1:
        printf("Type any two number\n");
        scanf("%d %d",&num1, &num2);
        printf("Sum of %d and %d is %d\n",num1,num2,num1+num2);
        break;

        case 2:
        printf("Type any two number\n");
        scanf("%d %d",&num1, &num2);
        printf("Difference between %d and %d is %d\n",num1,num2,num1-num2);
        break;

        case 3:
        printf("Type any two number\n");
        scanf("%d %d",&num1, &num2);
        printf("Product of %d and %d is %d\n",num1,num2,num1*num2);
        break;

        case 4:
        printf("Type any two number\n");
        scanf("%d %d",&num1, &num2);
        printf("Division of %d and %d is %d\n",num1,num2,num1/num2);
        break;

    default:
        printf("Choose the correct option\n");
    }

return 0;
}