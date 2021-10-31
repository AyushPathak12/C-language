/*WITH ARGUMENT WITHOUT RETURN VALUE*/
#include <stdio.h>
void printstar(int n)
{
    for (int i=0; i<n; i++)
    {
        printf("%c",'*');
    }
}
int main()
{
    printstar(7);
    return 0;
}