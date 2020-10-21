#include<stdio.h>
#include<stdlib.h>
void display(int *arr, int n)
{
    printf("the contents of the array are:-\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\n", arr[i]);
    }
}
void delete(int *arr, int p, int *n)
{
    for(int i=p;i<(*n);i++)
    {
        arr[i]=arr[i+1];
        
    }
    *n=*n-1;
    
}
void rem_Dupli(int *arr, int *n)
{
    for(int i=0;i<(*n);i++)
    {
        for(int j=i+1;j<(*n);j++)
        {
            
            if(arr[i]==arr[j])
            {
                delete(arr,j,n);
                j--;
            }
        }
    }
}
void insert(int *arr, int *n, int p, int x)
{
    int t,f=p;
    for(int i=p; i<=(*n); i++)
    {
        t=arr[i];
        arr[i]=x;
        x=t;
    }
    *n=*n+1;
}
int search(int *arr, int *n ,int key)
{
    for(int i=0;i<(*n); i++)
    {
        if(arr[i]==key)
            return i;
    }
    return -1;
}
void replace(int *arr, int *n, int x, int y)
{
    int fl=0;
    for(int i=0; i < (*n); i++)
    {
        if(arr[i]==x)
        {
            arr[i]=y;
            fl=1;
        }
    }
    if(fl==0)
    {
        printf("Element not found");
    }
}
void main()
{
    int t,x,y,p;
    printf("Enter the length of the array:-");
    scanf("%d", &t);
    int a[t];
    printf("Enter the elements of the array:- ");
    for(int i=0;i<t;i++)
    {
        scanf("%d", &a[i]);
    }
    do
    {
        printf("\n1. Display\n2. Delete\n3. Remove Duplicates\n4. Insert\n5. Search\n6. Replace\n7. Exit\nEnter your choice:- ");
        scanf("%d", &x);
        switch (x)
        {
            case 1:
                display(&a,t);
                break;
            case 2:
                printf("Enter the position:-");
                scanf("%d", &p);
                delete(&a, p, &t);
                break;
            case 3:
                rem_Dupli(&a, &t);
                break;
            case 4:
                printf("Enter the position:-");
                scanf("%d", &p);
                printf("Enter the element:-");
                scanf("%d", &y);
                insert(&a, &t, p, y);
                break;
            case 5:
                printf("Enter the element:-");
                scanf("%d", &y);
                p=search(&a, &t, y);
                if(p==-1)
                    printf("Element not found");
                else
                    printf("%d found at %d\n", y, p );
                break;
            case 6:
                printf("Enter the element to be replaced:-");
                scanf("%d", &p);
                printf("Enter the element to be replace by:-");
                scanf("%d", &y);
                replace(&a, &t, p, y);
                break;
            case 7:
                exit(0);
                break;
            default:
                printf("Invalid Choice");
        }
    } while (1);
}