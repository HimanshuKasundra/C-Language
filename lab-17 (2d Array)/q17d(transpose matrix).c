
#include <stdio.h>
void main()
{
	int a[3][3],i,j;
	printf("Enter row by row\n");

	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			scanf("%d",&a[i][j]);
		}
	}

	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("%3d",a[j][i]);
		}
		printf("\n");
	}
}