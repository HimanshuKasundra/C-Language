
#include <stdio.h>
#include <math.h>
void main()
{
	int i,pw,j,k;
	float n=1.0,rev=1.0;

	printf("Enter the power of e ");
	scanf("%d",&pw);

	for(i=1;i<=15;i++)
	{
		for(j=1;j<=i;j++)
		{
			rev=rev*j;
			// This loop is to get factorial of numbers 1,2,3,4 and so on print statement 1 to find out
		}
		k=pow(pw,i);
		// k gives x, x^2, x^3, x^4........
		// 1/rev gives 1/1!, 1/2!, 1/3!, 1/4! ..... 
		// printf("%f %f %d\n",rev,(1/rev),k); ---> Statement one
		
		n=n+(k/rev);

		// if rev = 1.0 isnt given at the end the loop continues as follows 1*1*2*1*2*3*1*2*3*4=rev 
		// i.e 288 instead of 4! i.e 24
        // giving rev = 1 resets its value
		rev=1.0;
	}
	printf("%f",n);
}