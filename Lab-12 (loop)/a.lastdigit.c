#include<stdio.h>
void main()
{
	int no,last,sum;
	printf("enter number:");
	scanf("%d",&no);
	while(no>=10)
    {
        last=no%10;
       no/=10;
    printf("%d\n",last);

    }
}
