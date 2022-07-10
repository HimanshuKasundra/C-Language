#include<stdio.h>
void main()
{
    float m,s,e,g,c,total,percentage;
    printf("\nenter marks of maths out of 100=");
    scanf("%f",&m);
    printf("\nenter marks of science out of 100=");
    scanf("%f",&s);
    printf("\nenter marks of english out of 100=");
    scanf("%f",&e);
    printf("\nenter marks of gujrati out of 100=");
    scanf("%f",&g);
    printf("\nenter marks of computer out of 100=");
    scanf("%f",&c);
    total=c+e+g+s+m;
    printf("\ntotal obtain  marks out of 500 is=%f",total);
    percentage=(100*total)/500;
    printf("\nScore percentage is =%f",percentage);

}
