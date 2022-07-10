#include<stdio.h>
void main()
{
	int i,j,n=5,k;
	char c='*';	
	for(i=1;i<=4;i++)
	{
		for (k=1;k<=(4-i);k++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("%c ",c);
		}
		printf("\n");

	}
}