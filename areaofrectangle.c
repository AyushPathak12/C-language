#include <stdio.h>
int main()
{
    int a, b, area;
    printf("Enter the length of rectangle.\n");
    scanf("%d", &a);

    printf("Enter the breadth of rectangle.\n");
    scanf("%d", &b);

    area = a * b;
    printf("area of rectangle: %d",area);
    return 0;
}
