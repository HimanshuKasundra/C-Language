
#include <stdio.h>
void main()
{
	int stu[2][2],i,j;
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			printf("Enter roll no : ");
			scanf("%d",&stu[i][j]);
			j++;
			printf("Enter marks : ");
			scanf("%d",&stu[i][j]);
		}
	}
	printf("\nRoll No.  Marks\n");
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			printf(" %3d",stu[i][j]);
			j++;
			printf(" %9d",stu[i][j]);
		}
		printf("\n");	
	}
}