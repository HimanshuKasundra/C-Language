// pscl_tri_ptrn.c WAP to draw Pascal's triangle

//             1
//           1   1
//         1   2   1
//       1   3   3   1
//     1   4   6   4   1
//   1   5  10  10   5   1
// 1   6  15  20  15   6   1

#include <stdio.h>
void main()
{
	int i,j,a; // common variable in conditioning loops
	int y; // for final nCr equation
	int r=1; // for finding r
	int k=1,z,x=1; // for finding n-r !
	int n=1; // for finding n!

	printf("Enter no of rows ");
	scanf("%d",&a);
	for(i=0; i<=a; i++)
	{
	   // spacing loop
	   for(j=i-10; j<=a-i; j++)
	   {
	        printf(" ");
	   }
	        
	    //  loop gvies value of n!
		 for(j=0; j<=i; j++)
		 {
		 	if(i==0 || j==0)
		 	    j=1;
		 	else
		 	    n=n*j;
		 }
		 
		 for(j=0; j<=i; j++)
		 {
		  //   this loop if for r!
		    r=r*j;
		    k=(i-j);
		   
		    // for getting n-r ! we have to run a loop for k !
		    for(z=1; z<=k; z++)
		    	x=x*z;
		 	
		 	if(r==0)
		 	    r=1;
		 	
		 	if(k==0)
		 	    k=1;
		 	    
		 	y=n/(r*x);
		 	// 3 in below printf is used to tell how many spaces the integer will occupy 
		 	// eg ---1, -123, --22, 1234 - represent blank spaces
		 	printf("%3d ",y);
		 	x=1;
		 }
           
        // Below resets the value of n and r for factorizing properly
		 n=1;
		 r=1;
		 printf("\n");
	}
}