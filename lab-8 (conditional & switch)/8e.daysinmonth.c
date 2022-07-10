#include <stdio.h>

void main()
{
	int m;

	printf("Enter month number : ");
	scanf("%d", &m);

	switch(m)
	{
		case 1:
		printf("31 days Jan\n");
		break;
		case 2:
		printf("28/29 days Feb\n");
		break;
		case 3:
		printf("31 days March\n");
		break;
		case 4:
		printf("30 days April\n");
		break;
		case 5:
		printf("31 days May\n");
		break;
		case 6:
		printf("30 days June\n");
		break;
		case 7:
		printf("31 days July\n");
		break;
		case 8:
		printf("31 days August\n");
		break;
		case 9:
		printf("30 days September\n");
		break;
		case 10:
		printf("31 days Oct\n");
		break;
		case 11:
		printf("30 days Nov\n");
		break;
		case 12:
		printf("31 days Dec\n");
		break;
		default:
		printf("Please enter month number between 1-12 \n");
	}
}