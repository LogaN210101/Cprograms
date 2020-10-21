#include<stdio.h>
void main()
{
    int n=0,i=0,key;
    printf("Enter the length of the array:- ");
    scanf("%d", &n);
    int a[n];
    printf("Enter Elements - ");
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter a number to search-");
    scanf("%d", &key);
    int p=search(a,n,key);
    if(p>-1)
        printf("Element found at %d", p);
    else
        printf("element not found");
    
}
int search(int *arr, int n, int key)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(key==arr[i])
        {
            return i;
        }
    }
    return -1;
}