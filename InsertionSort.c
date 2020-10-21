#include<stdio.h>
void main()
{
    int n=0,i=0;
    printf("Enter the length of the arr:- ");
    scanf("%d", &n);
    int a[n];
    printf("Enter elements - ");
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    sort(a, n);
    printf("The sorted arr is :- ");
    display(a,n);
}
void sort(int *arr, int n)
{
    int t=0,i,j,flag=0;
    for (i = 1 ; i <= n - 1; i++) 
    {
        t = arr[i];
        flag=0;

        for (j = i - 1 ; j >= 0; j--) 
        {
            if (arr[j] > t) 
            {
                arr[j+1] = arr[j];
                flag = 1;
            }
            else
                break;
        }
    if (flag)
        arr[j+1] = t;
    printf("Elements after pass %d:-", i);
    display(arr, n);
    printf("\n");
    }
}
void display(int *arr, int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d, ", arr[i]);
    }
}