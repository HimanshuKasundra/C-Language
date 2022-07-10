#include<stdio.h>
 int check_prime(int);
int check_prime(int a)
{
   int i;
   for (i=2;i<=a-1;i++)
   { 
      if (a%i==0)
     return 0;
   }
   return 1;
} 
void main()
{
   int n, result;
   printf("Enter an integer to check whether it is prime or not.\n");
   scanf("%d",&n);
   result = check_prime(n); 
   if (result == 1)
      printf("%d is prime.\n", n);
   else
      printf("%d is not prime.\n", n);
}


 