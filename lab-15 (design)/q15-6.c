// 1_A_B_ptrn.c  
//    1
//   A B
//  2 3 4
// C D E F

#include <stdio.h>
void main()
{
	int i,j,k,l=1;
	char ch='A';
	for(i=1;i<=6;i++)
	{
		for(j=1;j<=(6-i);j++)
		{
			printf(" ");
		}
		for(k=1;k<=i;k++)
		{
		    if(i%2==1)
		    {
			    printf("%d ",l);
			    l++;
		    }
			else
			{
			    printf("%c ",ch);
		    	ch++;
			}
		}
		printf("\n");
	}
}