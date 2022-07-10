#include<stdio.h>
void main()
{
    float km,m,inch,feet,cm;
    printf("enter value in K.M");
    scanf("%f",&km);
    m=(km*1000);
    cm=km*100000;
    inch=km*39370.1;
    feet=km*3280.84;
    printf("m:cm:inch:feet=%f:%f:%f:%f",m,cm,inch,feet);
}
