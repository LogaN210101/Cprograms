#include<stdio.h>
void main()
{
    int a[10]={0};
    double av=0.0;
    printf("Enter marks of 10 students- ");
    int i=0;
    for(i=0;i<10;i++)
    {
        scanf("%d", &a[i]);
        av=av+a[i];
    }
    av=av/10.0;
    printf("the average is --- %lf", av);
}