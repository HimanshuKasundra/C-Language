#include<stdio.h>
void main()
{
    float p,r,t,intrest;
     printf("enter value of principal");
    scanf("%f",&p);
    printf("enter value of rate");
    scanf("%f",&r);
    printf("enter value of time");
    scanf("%f",&t);
    intrest=(p*r*t)/100;
    printf("simple interest=%f",intrest);
}
