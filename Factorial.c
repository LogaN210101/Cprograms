#include<stdio.h>
void main()
{
    int no, f;
    printf("Enter a number to find factorial:- ");
    scanf("%d", &no);
    f=1;
    for(int i=1;i<=no;i++)
        f=f*i;
    printf("Factorial of %d is %d.", no, f);
}