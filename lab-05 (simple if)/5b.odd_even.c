#include<stdio.h>
void main()
{
    int a;
    printf("enter number: ");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("your number is even.");
    }
    if(a%2!=0)
    {
        printf("your number is odd.");
    }
}
