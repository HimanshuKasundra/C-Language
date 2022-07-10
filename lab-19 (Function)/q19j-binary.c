// binary.c convert decimal number into binary

#include <stdio.h>
#include <math.h>
void main()
{
	int i,j,num,r,bin=0;
	float dum;

	printf("\n Enter number ");
	scanf("%d",&num);

	for(i=1; i<=5; i++)
	{
		if(num==1)
		{
			bin=bin+1;
			break;
		}
		r=num%2;
		bin=bin*10+r;
		dum=ceil(num/2);
		num=num/2;
		printf("%f\n", dum );

	}
	printf(" 16  8  4  2  1\n");
	printf("%3d\n",bin);
}