

#include <stdio.h>
#include <math.h>
void main()
{
	int i,j,k,pw;
	float n=1.0,rev=1.0;

	printf("Enter the value of x ");
	scanf("%d",&pw);

	for(i=1;i<=9;i++)
	{
		for(j=1;j<=i;j++)
		{
			rev=rev*j;
		}
		
		k=pow(pw,i);
		
		if(i%2==0)
		{
			n=n+(k/rev);
		}
		else
		{
			n=n-(k/rev);
		}
		// printf("%f %f %d %f\n",rev,(1/rev),k,n);
		rev=1.0;
	}

	printf("%f",n);
}