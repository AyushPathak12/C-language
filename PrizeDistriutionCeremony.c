/* Prize Distribution ceremony */
#include <stdio.h>
int main()
{ int a;
printf("Which of the subjects you have passed?\n");
printf("Type 1 for maths,2 for science,3 for both maths and science\n");
scanf("%d",&a);
if(a==1)
{
    printf("Wow! You have won the prize of Rs.15 for clearing the exam of Maths.\n");
} 
else if(a==2)
{
    printf("Wow! You have won the prize of Rs.15 for clearing the exam of science.\n");
}
else if(a==3)
{
    printf("Wow! You have won the prize of Rs. 45 for clearing the exam of Maths and Science.\n");
} 
else 
{
    printf("Sorry! This choice is not given.Please select from the above given options.\n");
}
return 0;
}


