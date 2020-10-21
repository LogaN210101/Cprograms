#include <stdio.h>
void main(int a )
{
    int n, i = 1;
    long long bin = 0;
    printf("Enter a number- ");
    scanf("%d", &n);
    int t = n;
    while (n > 0)
    {
        bin = bin + (n % 2) * i;
        n = n / 2;
        i = i * 10;
    }
    printf("\nBinary of %d is %lld.", t, bin);
}