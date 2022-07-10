#include<stdio.h>
void main()
{
	int i,x;
	printf("enter values of x:");
	scanf("%d",&x);
	i=1;
	while(i<=x)
	{
		if(x%i==0)
		{
			printf("factors=%d",i);
		}
	 	i++;
	}
}