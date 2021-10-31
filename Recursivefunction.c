#include <stdio.h>
int fact(int);
// {
//     int no,ans;
//     printf("Enter a number:\n");
//     scanf("%d",&no);
//     ans=fact(no);
//     printf("Factorial is %d.\n",ans);
    
// }
int main()
{
    int no, ans;
    printf("Enter the number you want the factorial of:\n");
    scanf("%d",&no);
    ans=fact(no);
    printf("The factorial is %d.\n",ans);
    
    return 0;
}
int fact(int x)
{
    int f;
    if( x ==0)
    {
        return 1;
    }
    else
    {
        f=x*fact(x-1);  //Recursion
        return f;
    }
}
