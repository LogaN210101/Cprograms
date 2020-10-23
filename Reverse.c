#include <stdio.h>
void main()
{
    int n, s = 0;
    printf("Enter a number- ");
    scanf("%d", &n);
    int t = n;
    while (n > 0)
    {
        s = (s*10) + (n % 10);
        n = n / 10;
    }
    printf("Reverse of %d is %d.", t, s);
}
