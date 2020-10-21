#include<stdio.h>
void main()
{
    int n=0,i,j;
    printf("enter the height of the Pattern:- ");
    scanf("%d", &n);
    char ch[n];
    printf("Enter %d special characters of your choice:- \n");
    scanf("%s", &ch);
    for(i=1;i<=n;i++)
    {
        for(j=i;j<n;j++)
            printf(" ");
        for(j=i;j>=1;j--)
            printf("%c", ch[j-1]);
        for(j=2;j<=i;j++)
            printf("%c", ch[j-1]);
        printf("\n");
    }
}