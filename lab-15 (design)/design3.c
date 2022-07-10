#include<stdio.h>
void main()
{
	int i,j,n=5;
	char c='*';	
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c",c);
		}
		printf("\n");

	}
}