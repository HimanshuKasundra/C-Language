

#include <stdio.h>
void main()
{
	int i=1,num,sum=0;

	printf("Enter the no : ");
	scanf("%d",&num);

	while(i<=num)
	{
		if(num%i==0)
		{
		   sum=sum+1; 
		}
		i++;
	}
	if(sum<3)
	   printf("The no is prime\n");
	else
	   printf("The no is not prime\n");
	 
}