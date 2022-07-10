#include<stdio.h>
void main()
{
	int i,n;
	printf("enter value :");
	scanf("%d",&n);
	i=n+1;
	while(i+1==n)
	{
		printf("sum of a %d\n",i);
		i++;
	}
}