
#include <stdio.h>

void main()
{
	int i=1,num,dv,lst,n;

	printf("Enter no of digit in the number ");
	scanf("%d",&n);
	
	printf("Enter the number ");
	scanf("%d",&num);
	dv=num;
	while(i<n)
	{
		dv=dv/10;
		if(i==1)
		{
			lst=num-(dv*10);
		}
		i++;
	}
	printf("The first and last digit are %d and %d",dv,lst);
}