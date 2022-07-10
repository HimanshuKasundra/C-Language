#include<stdio.h>
void main()
{
    int a,i;
    printf("enter no.:");
    scanf("%d",&a);
    i=2;
    while(i<a)
    {
        if(a%i==0)
        {
            a=1;
            break;
        }
        i++;
    }
    if(a==0 || a==1)
    {
        printf("not a prime number");
    }
    else
    {
        printf("%d is a prime number",a);
    }
}
