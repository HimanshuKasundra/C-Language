#include<stdio.h>
void main()
{
    float a,b,c,d,r1,r2,r;
    printf("enter value of a :");
    scanf("%f",&a);
    printf("enter value of b :");
    scanf("%f",&b);
    printf("enter value of c :");
    scanf("%f",&c);
    d=b*2-(4*a*c);
    if(d>0)
    {
        r1=(-b+sqrt(d))/(2*a);
        r2=(-b-sqrt(d))/(2*a);
        printf("one of the root is %f",r1);
    }
    if(d<0)
    {
        printf("no real roots");
    }
    if(d==0)
    {
        r=-b/2*a;
        printf("roots are same and value is %f",r);
    }
}
