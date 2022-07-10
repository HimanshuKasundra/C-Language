#include<stdio.h>
void main ()
{
	int x,y,i,ans;
	printf("enter base and power:\n");
	scanf("%d%d",&x,&y);
	i=1;
	ans=1;
	while(i<=y)
	{
		ans=(ans*x);
		i++;
	}
	printf("value of x^y=%d\n",ans);
}