
#include <stdio.h>
void main()
{
	int b[3][3],c[3][3],i,j;

	// first matix
	printf("Enter row by row matix 1\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("%3d",b[i][j]);
		}
		printf("\n");
	}

	// second matix
	printf("Enter row by row matix 2\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			scanf("%d",&c[i][j]);
		}
	}
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("%3d",c[i][j]);
		}
		printf("\n");
	}

	// addition
	printf("\nAddition of matrix is\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("%3d",c[i][j]+b[i][j]);
		}
		printf("\n");
	}
}