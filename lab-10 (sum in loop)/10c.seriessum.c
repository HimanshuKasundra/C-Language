#include<stdio.h>
void main()
{
	float i,sum,n;
	printf("enter your last digit:\n");
	scanf("%f",&n);
	i=1;
	sum=0;
	while(i<=n)
	{
		sum=sum+(1/i);
		i++;
	}
	printf("sum of 1 to n numbers=%f",sum );
}