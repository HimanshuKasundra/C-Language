

#include <stdio.h>
void main()
{
	int i,num,rev=0;

	printf("Enter the number ");
	scanf("%d",&num);

	while(num>0)
	{
		i=num%10;
		rev=(rev*10)+i;
		num=num/10;
	}
	printf("the number in reverse is  %d \n",rev);
}