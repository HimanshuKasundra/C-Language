#include <stdio.h>
void main()
{
	int a[3],sum=0,min=0,max=0,i,j,pre=0;
	float avg=0.0;
	printf("Enter no one by one (3 nos)\n");
	for(i=0; i<3; i++)
	{
		scanf("%d",&a[i]);
		j=a[i];
		if(j>=pre)
		{
			max=j;
		}
		min=j;
		sum=sum+a[i];
// 		printf("%d %d\n",j,pre);
		pre=a[i];
	}
	for(i=0; i<2; i++)
	{
	    if(a[i]<a[i+1] && a[i]<min)
	        min=a[i];
	}
	
	avg=sum/3.0;
	printf("%f is avg, %d is sum, %d is min, %d is max\n",avg,sum,min,max);
}