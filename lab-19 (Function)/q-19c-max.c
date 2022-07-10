#include<stdio.h>
int maximum(int x,int y);
int maximum(int x,int y)
{
    int a,b,max;
    printf("enter values of a:");
    scanf("%d",&a);
    printf("enter values of b:");
    scanf("%d",&b);
    
	if(a>b)
    {
        printf("max number=%d\n",a);
        printf("min number=%d\n",b);
    }
    else
    {
       printf("min number=%d\n",a);
        printf("max number=%d\n",
		b);

    }
    return max;
}
void main()
{
    int a,b,max;
    max=maximum(a,b);
    
    
}
