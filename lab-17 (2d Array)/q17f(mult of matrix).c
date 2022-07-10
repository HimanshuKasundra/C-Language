
#include <stdio.h>
void main()
{
	int b[2][2],c[2][2],i,j,mul[2][2],sum;

	// first matix
	printf("Enter row by row matix 1\n");
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			printf("%2d",b[i][j]);
		}
		printf("\n");
	}

	// second matix
	printf("Enter row by row matix 2\n");
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			scanf("%d",&c[i][j]);
		}
	}
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			printf("%2d",c[i][j]);
		}
		printf("\n");
	}
}