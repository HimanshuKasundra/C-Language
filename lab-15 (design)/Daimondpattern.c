// dimnd_ptrn_w_slsh.c

// Refer to ot_dimnd.c for understandin how to write

// first create diamond with no space then use /\ slash to get following pattern
// must use \\ to print \ <-- new

// if not required aswe need the line skipped in ot_dimnd

// ******/\******
// *****/  \*****
// ****/    \****
// ***/      \***
// **/        \**
// */          \* <---
// *\          /*
// **\        /**
// ***\      /***
// ****\    /****
// *****\  /*****
// ******\/******


#include <stdio.h>
void main()
{
	int i,j,k;
	char ch;
	for(i=1; i<7; i++)
	{
		for(j=1; j<=(7-i); j++)
		{
			printf("*");
		}
		for(j=i; j<=i; j++)
		{
			printf("/");
		}

		// first 
		// set of spaces reqiured shape is triangle <1 and not <=1 because dont what space in first line
		for(k=1; k<i; k++)
		{
			printf(" ");
		}

		// second
		for(k=1; k<i; k++)
		{
			printf(" ");
		}
		for(j=i; j<=i; j++)
		{
			printf("\\");
		}
		for(j=1; j<=(7-i); j++)
		{
			printf("*");
		}
		printf("\n");
	}

	// second loop
	for(i=1; i<7; i++)
	{
	   	for(j=1; j<=i; j++)
		{
			printf("*");
		}
		for(j=i; j<=i; j++)
		{
			printf("\\");
		}
		
		// first
		for(k=1; k<(7-i); k++)
		{
		    printf(" ");
		}

		// second
		for(k=1; k<(7-i); k++)
		{
		    printf(" ");
		}
		for(j=i; j<=i; j++)
		{
			printf("/");
		}
		for(j=1; j<=i; j++)
		{
		    printf("*");
		}
		printf("\n");
	}
}