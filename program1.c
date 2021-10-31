#include <stdio.h>
int main()
{
    float cp, sp;
    float b=sp-cp;

    printf("Enter cost price and selling price in rupees respectively\n");
    scanf("%f %f",&cp,&sp);
    if (sp>cp)
    {
        b=sp-cp;
        printf("Congrats... There is profit.\n");
        printf("Profit is made by Rs.%f\n",b);
        printf("Gain percentage=%f\n",b/cp * 100);

    }
    else
    {   b=sp-cp;
        printf("Hooo.. There is loss.\n");    
        printf("Loss is made by Rs.%f\n",b);
        printf("Loss percentage=%f\n",b/cp * 100);
    }
    
    
    return 0;
}