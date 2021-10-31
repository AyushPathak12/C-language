#include <stdio.h>
int main()
{
    char ch;
    printf("Program to check that entered character is constant or vowel.\n");
    printf("Enter a character:\n");
    scanf("%c",&ch);
    switch(ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
         printf("%c is a vowel.\n",ch);
        
        break;
    
    default:
    printf("%c is a constant.\n",ch);
        break;
    }
    return 0;
}