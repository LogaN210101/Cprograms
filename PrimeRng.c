#include<stdio.h>
    void main()
    {
        int u=0, l=0;
        printf("Enter the limits of the range:- ");
        scanf("%d%d", &l, &u);
        for(int i=l;i<=u;i++)
        {
            int c=0;
            for(int j=2;j<=i/2;j++)
                if(i%j==0)
                    c++;
            if(c==0)
                printf("%d, ", i);
        }
    }