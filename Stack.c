#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 100
struct stack
{
    int a[MAXSIZE];
    int top;
};
void push(struct stack *st, int v)
{
    if(st->top >= MAXSIZE)
    {
        printf("Stack Overflow");
        return;
    }
    st->top=st->top+1;
    st->a[st->top]=v;
}
int pop(struct stack *st)
{
    if(st->top==-1)
    {
        printf("Stack Underflow");
        return NULL;
    }
    int p=st->top;
    st->top=st->top-1;
    return st->a[p];
}
void display(struct stack *st)
{
    if(st->top==-1)
    {
        printf("Empty stack");
        return;
    }
    for(int i=0;i<=st->top;i++)
    {
        printf("%d, ", st->a[i]);
    }
}
void main()
{
    struct stack *a;
    a = (struct stack *) malloc(sizeof(struct stack));
    a->top=-1;
    int x,e;
    do
    {
        printf(" \n 1. Exit\n2. push\n3. pop\n4. display\nEnter your choice:- ");
        scanf("%d", &x);
        switch (x)
        {
            case 1:
                exit(0);
                break;
            case 2:
                printf("Enter element to push-");
                scanf("%d", &e);
                push(a,e);
                break;
            case 3:
                e=pop(a);
                if(e!=NULL)
                {
                    printf("the popped element is- %d", e);
                }
                break;
            case 4:
                printf("the elements are-");
                display(a);
                break;                
            default:
                printf("Enter proper choice");
        }
    } while (1);
}