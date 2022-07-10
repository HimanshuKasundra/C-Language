#include<stdio.h>
int sum(int x,int y);
int sum(int x,int y) 
{
	int result;
	result=x+y;
	return result;
}
void main()
{
	int a,b;
	printf("Enetr values of a and b:\n");
	scanf("%d %d",&a,&b);
	int r;
	r=sum(a,b);
	printf("%d\n",r);
}