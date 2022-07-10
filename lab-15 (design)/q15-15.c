// A_E_ptrn.c
// AAAAA
// BBBB
// CCC
// DD
// E

#include <stdio.h>
void main()
{
	int i,j;
	char ch='A';
	for(i=1; i<=5; i++)
	{
		for(j=1; j<=(6-i); j++)
		{
			printf("%c",ch);
		}
		ch++;
		printf("\n");
	}
}