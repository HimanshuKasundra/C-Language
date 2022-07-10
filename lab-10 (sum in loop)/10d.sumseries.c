#include<stdio.h>
void main()
{
	int i,sum,n;
	printf("enter the value of n:");
	scanf("%d",&n);
	i=1;
	sum=0;
	while(i<=n)
	{
		if(i%2!=0)
		{
			sum=sum+i;
		}
		else
		{
			sum=sum-i;
		}
		i++;
	}
	printf("sum of 'n' numbers=%d",sum);
}
