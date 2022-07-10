// multi_table.c WAP to print Multiplication Table up to n

#include <stdio.h>
void main()
{
	int a,i,j,k;

	printf("Enter the no upto table ");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		for(j=1;j<=a;j++)
		{
		    k=j*i;
		    if(k<10)
		    {
		    	printf("  %d ",k);
		    }
		    else if(k<100)
		    {
		   		printf(" %d ",k);
		   	}
		    else
		    {
		    	printf(" %d",k);
		    }
		}
		printf("\n");
	}
}