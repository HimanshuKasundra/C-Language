#include<stdio.h>
int fibonacci(int);
int fibonacci(int i)
{ 
	if(i==0 || i==1)
	 return i; 
	else return (fibonacci(i-1)+fibonacci(i-2));
} 
void main()
{ 
	int n, i; 
	printf("Enter the number of element you want in series :\n"); 
	scanf("%d",&n); 
	printf("fibonacci series is : \n");
	for(i=0;i<n;i++) { 
		printf("%d ",fibonacci(i));
	}
	
}
 
