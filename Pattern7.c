#include<stdio.h>
void main()
{
    int n=0,i,j;
    printf("enter the height of the Pattern:- ");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        for(j=i;j<n;j++)
            printf(" ");
        for(j=i;j>=1;j--)
            printf("*");
        for(j=2;j<=i;j++)
            printf("*");
        printf("\n");
    }
}