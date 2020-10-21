#include <stdio.h>
void main()
{
    int a, b, n, i, gcd = 1;
    printf("Enter 2 numbers to calculate GCD- ");
    scanf("%d%d", &a, &b);
    if (a > b)
        n = b;
    else
        n = a;
    for (i = 2; i <= n; i++)
    {
        if (a % i == 0 && b % i == 0)
            gcd = i;
    }
    printf("Gcd of %d and %d is %d.", a, b, gcd);
}
