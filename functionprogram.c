#include <stdio.h>

int check(int);
int main(int argc, char const *argv[])
{
    int i, c;

    printf("Enter the value of i:\n");
    scanf("%d", i);
    c = check(i);
    printf("%d\n", c);

    return 0;
}

int check(int ch)
{

    if (ch > 5)
    {
        return (7);
    }
    else if (ch == 5)
    {
        return (9);
    }

    else
    {
        return (8);
    }
}
