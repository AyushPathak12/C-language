#include <stdio.h>
int main()
{
    printf("Hello World\n");
    int i, age;
    for (i=0; i<10; i++){
         printf("%d\nEnter your age\n", i);
         scanf("%d", &age);
         if (age>10)
         {
             continue;

         }
         printf("Ayush is a good boy.");
         printf("He is smartest ever.");
    }
    return 0;
}
