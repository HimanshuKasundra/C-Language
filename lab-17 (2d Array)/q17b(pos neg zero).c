
#include <stdio.h>
void main()
{
	int a[3][3],i,j,pos=0,neg=0,zro=0;
	printf("Enter matrix row by row \n");
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
			printf("%3d ",a[i][j]);
			if(a[i][j]<0)
				neg++;
			else if(a[i][j]>0)
				pos++;
			else
				zro++;
		}
		printf("\n");
	}
	printf("No of +ve %d, -ve %d, zero %d \n",pos,neg,zro);
}