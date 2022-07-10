

#include <stdio.h>
void main()
{
	int i,j;
	float rev=1.0,num=1.0;
    // after 9 function will return 0.000 for 1/rev
    for(i=1;i<=10;i++)
    {
        for(j=1;j<=i;j++)
        {
            rev=rev*j;
            // This loop is to get factorial of numbers 1,2,3,4 and so on print statement 1 to find out
        }
        // printf("%f %f \n",rev,(1/rev)); ---> Statement one
        num=num+(1/rev);
        // if rev = 1.0 isnt given at the end the loop continues as follows 1*1*2*1*2*3*1*2*3*4
        // giving rev = 1 resets its value
        rev=1.0;
    }
    printf("%f ",num);
}