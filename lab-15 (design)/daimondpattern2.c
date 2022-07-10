// dimnd_ptrn.c
// Refer to ot_dimnd.c for understandin how to write

//      *      
//     ***     
//    *****    
//   *******   
//  *********  
// *********** 
//  ********* 
//   *******  
//    *****   
//     ***    
//      *  

 
#include <stdio.h>
void main()
{
	int i,j,k;
	for(i=1; i<7; i++)
	{
		for(j=1; j<=(7-i); j++)
		{
			printf(" ");
		}
		for(k=1; k<=i; k++)
		{
			printf("*");
		}
		for(k=1; k<i; k++)
		{
			printf("*");
		}
		for(j=1; j<=(7-i); j++)
		{
			printf(" ");
		}
		printf("\n");
	}
	// second loop
	for(i=1; i<6; i++)
	{
	    printf(" ");
	   	for(j=1; j<=i; j++)
		{
			printf(" ");
		}
		for(k=1; k<(6-i); k++)
		{
		    printf("*");
		}
		for(k=1; k<=(6-i); k++)
		{
		    printf("*");
		}
		for(j=1; j<=i; j++)
		{
		    printf(" ");
		}
		printf("\n");
	}
}