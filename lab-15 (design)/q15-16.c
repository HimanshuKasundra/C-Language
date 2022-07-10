// A_A_ptrn.c
// ABCDE
// ABCD
// ABC
// AB
// A

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
			ch++;
		}
		ch='A';
		printf("\n");
	}
}