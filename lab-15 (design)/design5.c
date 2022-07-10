#include<stdio.h>
void main()
{
	int i,j,n=5,k;
	char c='*';	
	for(i=5;i>=1;i--)
	{
		for (k=1;k<=(5-i);k++)
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