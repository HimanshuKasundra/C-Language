#include<stdio.h>
void main()
{
	int i,fact,x;
	printf("enter value of x: \n");
	scanf("%d",&x);
	i=1;
	fact=1;                           
	while(i<=x)
	{
		fact=fact*i;
		i++;
	}
	printf("factorial of x=%d",fact);

}