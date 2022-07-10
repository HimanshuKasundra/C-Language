#include<stdio.h>
void main()
{
 int a,b,ans;
 printf("enter value of a :");
 scanf("%d",&a);
 printf("enter value of b :");
 scanf("%d",&b);
 printf("\n 1.addition");
 printf("\n 2.substraction");
 printf("\n 3.multipication");
 printf("\n 4.divison");
 printf("\n enter your choice out of four:");
 scanf("%d",&ans);
 if(ans==1)
 {
    ans=a+b;

 }
 if(ans==2)
 {
     ans=a-b;
 }
 if(ans==3)
 {
     ans=a*b;
 }
 if(ans==4)
 {
     ans=a/b;
 }

 printf("your answer is %d",ans);
}
