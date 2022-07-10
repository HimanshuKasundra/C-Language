#include<stdio.h>
void main()
{
    float a,hra,da,gross;
	printf("enter your basic salary :");
	scanf("%f",&a);
	if(a>=10000)
    {
        hra=a*0.2,da=a*0.8;
    }
    if(a>=20000)
    {
        hra=a*0.25,da=a*0.9;
    }
    if(a>=30000)
    {
        hra=a*0.3,da=a*9.5;
    }
	gross=a+hra+da;
	printf("your gross salary is %f",gross);
}
