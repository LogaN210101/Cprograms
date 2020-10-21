#include<stdio.h>
void main()
{
    int a=0,b=1,c=0,i=1;
    for(;i<=10;i++)
    {
        printf("%d, ", a);
        c=a+b;
        a=b;
        b=c;
    }
}