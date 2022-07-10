// str_updwn_pyr.c
// * * * * * * * * * * *
//   * * * * * * * * *
//     * * * * * * *
//       * * * * *
//         * * *
//           *

#include <stdio.h>
void main()
{
	int i,j,k;
	for(i=6; i>=1; i--)
	{
		for(j=1; j<=6-i; j++)
		{
			printf(" ");
		}
        
       
		for(k=1; k<=2*i-1; k++)
		{
			printf("*");
		}
		printf("\n");
	}
}