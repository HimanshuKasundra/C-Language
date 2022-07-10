
#include <stdio.h>
void main()
{
	int a[3]={1,2,3},i,j;

	// [ ] --> ma array size lakhvani but { nu indexing 0 thi chalu thase 
	// a[0],a[1],a[2]}  a[3] nai hoi
	
	for(i=2; i>=0; i--)
	{
		printf("%d ",a[i]);
	}
}