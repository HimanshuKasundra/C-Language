#include<stdio.h>
void main()
{
	int no,digit,sum;
	printf("enter number:");
	scanf("%d",&no);
	sum=0;
	while(no!=0)
    {
        digit=no%10;
       no/=10;
    printf("%d\n",digit);
    sum=digit+sum;
    }
    printf("sum=%d",sum);
}
