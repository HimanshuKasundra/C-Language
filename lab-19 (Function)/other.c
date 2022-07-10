#include<stdio.h>
int add(int n);
int add(int n)
{
	int i,sum=0;
	printf("enter value of n:");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	return sum;
}
void main()
{
	int n,sum;
	sum=add(n);
	printf("sum of n numbers=%d\n",sum );
}