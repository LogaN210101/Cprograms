#include<stdio.h>
#include<math.h>
int distance(int x1,int x2,int y1,int y2)
{
    int distance;
    distance=((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2));
      return distance;
}
void main()
{
    int x1,y1,x2,y2,x3, y3;
    double s1,s2,s3;
    int a,b,c;
    printf("Enter cordinates of first point- ");
    scanf("%d%d", &x1, &y1);
    printf("Enter cordinates of second point- ");
    scanf("%d%d", &x2, &y2);
    printf("Enter cordinates of third point- ");
    scanf("%d%d", &x3, &y3);
    a=distance(x1,x2,y1,y2);
    b=distance(x3,x2,y3,y2);
    c=distance(x1,x3,y1,y3);
    s1=sqrt(a);
    s2=sqrt(b);
    s3=sqrt(c);
    printf("%d %d %d",a,b,c);
    if((s1+s2)==s3 || (s2+s3)==s1 || (s1+s3)==s2)
    {
        printf("not a triangle");
    }
    else if( (a+c) == b || (a+b) == c || (b+c) == a)
    {
        printf("right angled");
    }
    else if((a+b) < c || (a+c) < b || (b+c) < a)
    {
        printf("obtused angled");
    }
    else
    {
        printf("acute angled");
    }
}