#include<stdio.h>
void main()
{
    int s,hr,min,sec;
    printf("enter value in seconds");
    scanf("%d",&s);
    hr=(s/3600);
    min=(s-(3600*hr))/60;
    sec=(s-(3600*hr)-(min*60));
    printf("hour:mintues:seconds=%d:%d:%d",hr,min,sec);
}
