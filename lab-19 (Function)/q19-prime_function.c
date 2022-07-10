// prime_function.c WAP that defines a function which returns 1 if the number is prime otherwise return 0

#include <stdio.h>

int prime(int);

void main()
{
	int num,i;

	printf("Enter the number\n");
	scanf("%d",&num);

	i=prime(num);

	printf("\n%d",i);
}
int prime(int num)
{
	if(num%2)
}