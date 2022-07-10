#include<stdio.h>
void main()
{
	int sum=0,i,n;
	printf("enter value of n :");
	scanf("%d",&n);
	i=1;
	while(i<n)
	{
		if(n%i==0)
		{
			sum+=i;
		}
		i++;
	}
	if(sum==n)
    {
        printf("perfect number..");
    }
    else
    {
        printf("Not a perfect number..");
    }
}
