// upr_tri_12345_ptrn.c
// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2
// 1

#include <stdio.h>
void main()
{
	int i,j,space;
	for(i=1; i<=5; i++)
	{
		for(j=1; j<=(6-i); j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}