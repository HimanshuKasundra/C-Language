#include<stdio.h>
void main()
{
    int a,b;
    printf("enter value of a:");
    scanf("%d",&a);
    printf("enter value of b:");
    scanf("%d",&b);
    if(a>b)
    {
        printf("\n a will be maximum");
        printf("\n b will be minimum");
    }
if(b>a)
    {
        printf("/n b will be maximum");
        printf("\n a will be minimum");
    }
if(a==b)
{
    printf("both numbers are same");
}
}
