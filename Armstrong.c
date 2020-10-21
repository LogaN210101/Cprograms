#include<stdio.h>
void main()
{
    int no=0,t=0,s=0, d=0;
    printf("Enter a number to check- ");
    scanf("%d", &no);
    t=no;
    while(t>0)
    {
        d=t%10;
        s=s+ d*d*d;
        t=t/10;
    }
    if(s==no)
        printf("The number is armstrong.");
    else
        printf("The number is not armstrong");

}