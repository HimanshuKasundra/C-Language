// 5_1_ptrn.c
// 5 5 5 5 5
// 4 4 4 4
// 3 3 3
// 2 2
// 1
#include <stdio.h>
void main()
{
	int i,j,k=5;
	for(i=1; i<=5;i++)
	{
		for(j=1; j<=(6-i); j++)
		{
			printf("%d",k);
		}
		k--;
		printf("\n");
	}
}
