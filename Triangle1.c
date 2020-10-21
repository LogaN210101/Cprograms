#include<stdio.h>
#include<math.h>
float distance(int x1,int x2,int y1,int y2)
{
    float distance;
    distance=sqrt(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)));
      return distance;
}
void main()
{
    int x1,y1,x2,y2,x3, y3;
    double s1,s2,s3;
    printf("Enter cordinates of first point- ");
    scanf("%d%d", &x1, &y1);
    printf("Enter cordinates of second point- ");
    scanf("%d%d", &x2, &y2);
    printf("Enter cordinates of third point- ");
    scanf("%d%d", &x3, &y3);
    s1=distance(x1,x2,y1,y2);
    s2=distance(x3,x2,y3,y2);
    s3=distance(x1,x3,y1,y3);
    if(s1+s2==s3 || s2+s3==s1 || s1+s3==s2)
        printf("not a triangle");
    else if(s1==s2 && s2==s3)
       printf("Equilateral triangle");
    else if(s1==s2 || s2==s3 || s3==s1)
        printf("isosceles triangle");
    else
        printf("scalene triangle");
}