#include<stdio.h>
float intrest(float p,float r,float t);
float intrest(float p,float r,float t)
{
	float totalintrest;
	totalintrest=(p*r*t)/100;
	return totalintrest;
}
void main()
{
	float a,b,c,ti;
	printf("enter values of p,r and t\n");
	scanf("%f %f %f",&a,&b,&c);
	ti=intrest(a,b,c);
	printf("%f\n",ti);
}