#include <stdio.h>
void main()
{
    int n, s = 0;
    printf("Enter a number- ");
    scanf("%d", &n);
    int t = n;
    while (n > 0)
    {
        s = s + n % 10;
        n = n / 10;
    }
    printf("Sum of the digits of %d is %d.", t, s);
}