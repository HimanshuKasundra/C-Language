// hight_wght.c WAP to read five person height and weight and count the number of person having height greater
// than 170 and weight less than 50

#include <stdio.h>
void main()
{
	int stu[5][2],i,j,wcnt=0,hcnt=0;
	for(i=0; i<5; i++)
	{
		for(j=0; j<2; j++)
		{
			printf("\nEnter Height of %d person : ",(i+1));
			scanf("%d",&stu[i][j]);
			j++;
			printf("Enter Weight of %d person : ",(i+1));
			scanf("%d",&stu[i][j]);
			j--;
			if(stu[i][j]>170)
				hcnt++;
			j++;
			if(stu[i][j]<50)
				wcnt++;
		}
	}
	printf("\n%d have more than 170 %d have less than 50 \n",hcnt,wcnt);
}