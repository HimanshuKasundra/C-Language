#include <stdio.h>
void main()
{
	int reminder,num,rev=0,n;

	printf("Enter the number ");
	scanf("%d",&num);
	n=num;
	while(num>0)
	{
		reminder=num%10;
		rev=(rev*10)+reminder;

		num=num/10;
	}
	if(n==rev)
	{
		printf("The number=%d is palindrome",n);
	}
	else
	{
		printf("The no isnt palindrome \n");
	}
}