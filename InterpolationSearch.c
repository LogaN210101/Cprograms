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
    sort(a,n);
    printf("The sorted array is :- ");
    display(a,n);
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
    int lo = 0, hi = (n - 1), pos;
    while (lo <= hi && key >= arr[lo] && key <= arr[hi]) 
    { 
        if (lo == hi)
        { 
            if (arr[lo] == key) 
                return lo; 
            return -1; 
        }  
        pos = lo + (((double)(hi-lo) / (arr[hi]-arr[lo]))*(key - arr[lo])); 
        if (arr[pos] == key) 
            return pos; 
  
        if (arr[pos] < key) 
            lo = pos + 1;
        else
            hi = pos - 1; 
    } 
    return -1; 
}
void sort(int *arr, int n)
{
    int t=0,i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>=arr[j+1])
            {
                t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
            }
        }
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