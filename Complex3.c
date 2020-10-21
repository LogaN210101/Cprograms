#include<stdio.h>
#include<stdlib.h>
struct complexNo
{
    double r, i;
}*a,*b,*c;
void addcomplex()
{
    
    c->r = a->r + b->r;
    c->i = a->i + b->i;
    
    
}
void subcomplex()
{
    
    (c->r)=(a->r)-(b->r);
    (c->i)=(a->i)-(b->i);
    
}
void multicomplex()
{
    
    c->r =(a->r * b->r) + (a->i * b->i * (-1));
    c->i = (a->i * b->r) + (b->i * a->r);
    
}
void display()
{
    
    printf("The complex number is- %lf + (%lf)i \n ", c->r, c->i);
}
void main()
{
    a = (struct complexNo *) malloc(sizeof(struct complexNo));
    b = (struct complexNo *) malloc(sizeof(struct complexNo));
    c = (struct complexNo *) malloc(sizeof(struct complexNo));
    int x;
    do
    {
        printf(" \n 1. Exit\n2. Add\n3. Subtract\n4. Multiply\nEnter your choice:- ");
        scanf("%d", &x);
        switch (x)
        {
            case 1:
                exit(0);
                break;
            case 2:
                printf("Enter 1st complex number- \nReal-");
                scanf("%lf", &a->r);
                printf("Imaginary-");
                scanf("%lf",  &a->i);
                printf("Enter 2nd complex number- \nReal-");
                scanf("%lf",  &b->r);
                printf("Imaginary-");
                scanf("%lf", &b->i);
                addcomplex();
                display();
                break;
            case 3:
                printf("Enter 1st complex number- \nReal-");
                scanf("%lf",&a->r);
                printf("Imaginary-");
                scanf("%lf", &a->i);
                printf("Enter 2nd complex number- \nReal-");
                scanf("%lf", &b->r);
                printf("Imaginary-");
                scanf("%lf", &b->i);
                subcomplex();
                display();
                break;
            case 4:
                printf("Enter 1st complex number- \nReal-");
                scanf("%lf", &a->r);
                printf("Imaginary-");
                scanf("%lf", &a->i);
                printf("Enter 2nd complex number- \nReal-");
                scanf("%lf", &b->r);
                printf("Imaginary-");
                scanf("%lf", &b->i);
                multicomplex();
                display();
                break;                
            default:
                printf("Enter proper choice");
        }
    } while (1);
}