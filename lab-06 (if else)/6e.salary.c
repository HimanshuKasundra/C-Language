#include<stdio.h>
void main()
{
	float basic,hra,da,grosssalary;
	printf("Enter your basic salary:\n");
	scanf("%f",&basic);
	if(basic>=10000)
		{
			if(basic<20000)
			{
				hra=basic*0.2;
				da=basic*0.8;
				grosssalary=basic+hra+da;
				printf("gross salary=%f",grosssalary);
			}
		}
	if(basic>=20000)
		{
			if(basic<30000)
			{
				hra=basic*0.25;
				da=basic*0.9;
				grosssalary=basic+hra+da;
				printf("gross salary=%f",grosssalary);
			}
		}
	if(basic>=30000)
		{
				hra=basic*0.3;
				da=basic*0.95;
				grosssalary=basic+hra+da;
				printf("gross salary=%f",grosssalary);
			
		}
}