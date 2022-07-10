#include<stdio.h>
void main()
{
	int n,ld;
	printf("enter your number\n");
	scanf("%d",&n);
	ld=n%10;
	printf("last digit=%d\n",ld);
	while(n>10)
	{
		n=n/10; 
		printf("first digit=%d\n",n);
		
	}
	printf("sum of first digit and last digit=%d\n",ld+n);
	
}