

#include <stdio.h>
void main()
{
	int i,num,rev=0,j;

	printf("Enter the number ");
	scanf("%d",&num);
    
    for(i=1;i<=num;i++)
    {
        for(j=1;j<=i;j++)
        {
            rev=rev+j;
        }
    }
    printf("Enter the number is %d",rev);
}