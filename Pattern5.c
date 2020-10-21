#include<stdio.h>
void main()
{
    int i,j,t=32,n,x=96;
    char ch;
    printf("Enter height of the pattern:-");
    scanf("%d", &n);
    if(n<=26)
    {
        for(i=1;i<=n;i++)
        {
            t=t*(-1);
            x=x+t;
            ch=(char)(x+i);
            for(j=1;j<=i;j++)
            {
                printf("%c", ch);
            }
            printf("\n");
        }
    }
    else
        printf("pattern not possible");
}