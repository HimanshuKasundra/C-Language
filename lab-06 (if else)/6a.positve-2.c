#include<stdio.h>
void main()
{
    int a;
    printf("enter no.");
    scanf("%d",&a);
    if(a>0)
    {
        printf("number is positive.",a);
    }
    else
    {
        printf("number is negative.");
    }
    if(a==0)
    {
        printf("number is zero.",a);
    }
}
