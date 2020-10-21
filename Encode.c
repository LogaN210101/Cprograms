#include<stdio.h>
void main()
{
    int n=0,i,j;
    printf("enter the length of the text:- ");
    scanf("%d", &n);
    char ch[n];
    char a[8]="ASIHasih";
    char b[4]="@$!#";
    printf("Enter the text to encode:- ");
    scanf("%s", &ch);
    for(i=0;i<n;i++)
    {
        for(j=0;j<4;j++)
        {
            if(ch[i]==a[j] || ch[i]==a[j+4])
                ch[i]=b[j];
        }
    }
    printf("the encoded String is:- %s", ch);
}