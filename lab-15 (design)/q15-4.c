// ptrn_1_0_1_3.c WAP to display following pattern
// 1
// 0 1
// 1 0 1
// 0 1 0 1

#include <stdio.h>
void main()
{
	int i,j,k=1;
 	for(i=1;i<=4;i++)
 	{
 		for(j=;j<i;j++)
 		{
 			printf("%d ",((i+j)%2));
 		}
 		printf("\n");
 	}
}
