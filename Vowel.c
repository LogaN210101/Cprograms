#include<stdio.h>
void main()
{
    char ch;
    printf("Enter a character to check:- ");
    scanf("%c", &ch);
    
    switch(ch)
    {
        case 'A':
        case 'a':
        case 'E':
        case 'e':
        case 'I':
        case 'i':
        case 'O':
        case 'o':
        case 'U':
        case 'u':
            printf("%c is a vowel", ch);
            break;
        default:
            printf("%c is not a vowel", ch);
        }
}