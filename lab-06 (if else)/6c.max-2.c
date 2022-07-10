#include<stdio.h>
void main(int argc, char const *argv[])
{
	int a,b;
	printf("enter number :\n");
	scanf("%d",&a);
	printf("enter another number :\n");
	scanf("%d",&b);
	if(a>b)
	{
		printf("a will be maximum.\n");
		printf("b will be minimum.\n");
	}
	else
	{
		printf("a will be minimum:\n");
		printf("b will be maximum.\n");
    }
}
