#include<stdio.h>
void main()
{
    float d,u,t,a;
    printf("enter value of u :\n");
    scanf("%f",&u);
    printf("enter value of t :\n");
    scanf("%f",&t);
    printf("enter value of a :\n");
    scanf("%f",&a);
    d=(u*t)+(a*(t*t));
    printf("distance = %f",d);
}
