// #include <stdio.h>
// int main()
// {
//     int num,i;

//     printf("Enter a number:\n");
//     scanf("%d",&num);
    
//     for ( i = 1; i < 11; i++)
//     {
//         printf("%d x %d = %d\n" ,num,i,i*num);
//     }
    
//     return 0;
// }
#include <stdio.h>
int main()
{
    int p,n,i;
    float r,si;
    for ( i = 1; i < 4; i++)
    {
        printf("Enter values of p,n and r\n");
        scanf("%d %d %f", &p, &n, &r);
        si=p*n*r/100;
        printf("Simple Interest=Rs.%f\n",si);
    }
    return 0;
}    