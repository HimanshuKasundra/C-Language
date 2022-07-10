#include<stdio.h>
void main()
{
	int i=1,n,sum=0;
	float num,avg;
	
	printf("enter value of n");
	scanf("%d",&n);
	printf("enter number");
	while(i<=n)
	{
		scanf("%f",&num);
		sum=sum+num;
		i++;
	}

	avg=sum/n;
	printf("average is %f and sum is %d",avg,sum);
}
