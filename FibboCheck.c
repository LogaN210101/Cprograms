#include<stdio.h>
void main()
{
    int a=0,b=1,c=0,i=1, no=0, fl=0;
    printf("Enter a number to check:- ");
    scanf("%d", &no);
    while(a<=no)
    {
        if(no==a)
        {
            printf("The number is fibbonacci.");
            fl=1;
            break;
        }
        c=a+b;
        a=b;
        b=c;
    }
    if(fl==0)
        printf("Not fibbonacci");
}