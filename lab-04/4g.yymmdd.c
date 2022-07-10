#include<stdio.h>
void main()
{
    int days,year,week,day;
    printf("enter value in number of days");
    scanf("%d",&days);
    year=(days/365);
    week=(days % 365)/7;
    day=((days % 365) & 7);
    printf("years:weeks:days=%d:%d:%d",year,week,day);
}
