#include<stdio.h>
#include<stdlib.h>
struct complexNo
{
    double r, i;
};
void addcomplex(struct complexNo *a, struct complexNo *b, struct complexNo *c)
{
    printf("a");
    (c->r)=(a->r)+(b->r);
    (c->i)=(a->i)+(b->i);
    printf("a");
    
}
void subcomplex(struct complexNo *a, struct complexNo *b, struct complexNo *c)
{
    
    (c->r)=(a->r)-(b->r);
    (c->i)=(a->i)-(b->i);
    
}
void multicomplex(struct complexNo *a, struct complexNo *b, struct complexNo *c)
{
    
    c->r=(a->r * b->r) + (a->i * b->i * (-1));
    c->i=(a->i*b->r)+(b->i*a->r);
    
}
void display(struct complexNo *c)
{
    printf("a");
    printf("The complex number is- %lf + (%lf)i \n ", (c->r), (c->i));
}
void main()
{
    struct complexNo a, b, *c;
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
                scanf("%lf", &(a.r));
                printf("Imaginary-");
                scanf("%lf", &(a.i));
                printf("Enter 2nd complex number- \nReal-");
                scanf("%lf", &(b.r));
                printf("Imaginary-");
                scanf("%lf", &(b.i));
                addcomplex(&a,&b,c);
                display(c);
                break;
            case 3:
                printf("Enter 1st complex number- \nReal-");
                scanf("%lf", &(a.r));
                printf("Imaginary-");
                scanf("%lf", &(a.i));
                printf("Enter 2nd complex number- \nReal-");
                scanf("%lf", &(b.r));
                printf("Imaginary-");
                scanf("%lf", &(b.i));
                subcomplex(&a,&b,c);
                display(c);
                break;
            case 4:
                printf("Enter 1st complex number- \nReal-");
                scanf("%lf", &(a.r));
                printf("Imaginary-");
                scanf("%lf", &(a.i));
                printf("Enter 2nd complex number- \nReal-");
                scanf("%lf", &(b.r));
                printf("Imaginary-");
                multicomplex(&a,&b,c);
                display(c);
                break;                
            default:
                printf("Enter proper choice");
        }
    } while (1);
}