// high_avg.c WAP to count numbers higher than the average of an array

#include <stdio.h>
void main()
{
	int high[5], avg=0, cnt=0, i, j;
	printf("Enter no one by one \n");
	for(i=0; i<5; i++)
	{
		scanf("%d",&high[i]);
		avg=avg+high[i];
	}
	avg=avg/5;
	for(i=0; i<5; i++)
	{
		if(high[i]>avg)
			cnt++;
	}
	printf("Avg is %d \n %d no are higher than avg",avg,cnt);
}
