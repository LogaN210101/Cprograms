#include<stdio.h>
#include<math.h>
void main()
{
    double X2, X1, X0, d,a,b;
    printf("Enter the co-efficient of x^2, x^1, x^0 :- ");
    scanf("%lf%lf%lf", &X2, &X1, &X0);
    d=(X1 * X1) - (4.0 * X2 * X0);
    if(d<0.0)
    {
        a=(-1.0 * X1)/(2.0 * X2);
        b=sqrt(-d)/(2.0 * X2);
        printf("Root1 :- %f + %fi \n", a,b);
        printf("Root2 :- %f - %fi", a,b);
    }
    else
    {
        double r1 = (-1.0 * X1 + sqrt(d)) / (2.0 * X2);
        double r2 = (-1.0 * X1 - sqrt(d)) / (2.0 * X2);
        printf("Root 1 :- %lf \n", r1);
        printf("Root 2 :- %lf", r2);
    }
}