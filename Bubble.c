#include<stdio.h>
void main()
{
    int a[10]={0},t,j=0,i=0;
    printf("Enter 10 numbers - ");
    for(i=0;i<10;i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0;i<10-1;i++)
    {
        for(j=0;j<10-i-1;j++)
        {
            if(a[j]>=a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;

            }
        }
    }
    for(i=0;i<10;i++)
    {
        printf("%d, ", a[i]);
    }

}