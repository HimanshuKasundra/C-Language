// am_gm_hm.c WAP to calculate the average, geometric and harmonic mean of n elements in an array

#include <stdio.h>
#include <math.h>
void main()
{
	int n,i;
	float am=0, gm=1, hm=0,h;

	printf("\nEnter how many nos ");
	scanf("%d",&n);

	int arr[n];

	printf("\nEnter no \n");

	for(i=0; i<n; i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0; i<n; i++)
	{
		am=am+arr[i];
		gm=gm*arr[i];
		hm=hm+(1/arr[i]);
	}
	printf("\n%f am %f gm %f hm\n",am,gm,hm);
	am=am/n;
	h=1/n;
	gm=pow(gm,h);
	hm=n/hm;
	printf("\n%f am %f gm %f hm\n",am,gm,hm);
}