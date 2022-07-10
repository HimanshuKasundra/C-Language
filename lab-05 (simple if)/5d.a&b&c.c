#include<stdio.h>
void main()
{
	int a,b,c;
	printf("enter first number :\n");
	scanf("%d",&a);
	printf("enter second number :\n");
	scanf("%d",&b);
	printf("enter third number :\n");
	scanf("%d",&c);
	if(a>b && a>c)
	{
		printf("first number is maximum.\n");
	}
	if(b>a && b>c)
	{
		printf("third number is maximum.\n");	
	}
	if (c>a && c>a)
	{
		printf("second number is maximum.\n");
	}
}