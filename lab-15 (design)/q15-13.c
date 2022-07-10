#include<stdio.h>
void main()
{
	int i,j,k;
	char ch='*';
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(i==4 && j==1)
			{printf(" ");
			printf("%c",ch);
			}
			else
			{
				printf("%c",ch);
			}
		}
		printf("\n");
	}
}