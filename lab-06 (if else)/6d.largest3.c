#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter the value of a,b and c=\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
		{
			printf("%d is the largest number",a);
		}
	}
	if(b>a)
	{
		if(b>c)
		{
			printf("%d is the largest number\n",b);
		}
	}
	if(c>a)
	{
		if(c>b)
		{
			printf("%d is the largest number\n",c);
		}
	}
}


