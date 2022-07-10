 #include<stdio.h>
void main()
{
	int i,n,sum;
	printf("enter your last digit:\n");
	scanf("%d",&n);
	i=1;
	sum=0;
	while(i<=n)
	{
		sum=sum+i;
		i++;
	}
	printf("sum of 1 to n numbers:%d",sum);

}