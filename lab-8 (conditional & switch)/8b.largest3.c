#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter the value of a,b and c\n");
    scanf("%d%d%d",&a,&b,&c);
    (a>b)
    ?
       ((a>c)
        ?
            printf("greater number is %d",a)
        :
            printf("greater number is %d",c))
    :
        ((b>c)
        ?
            printf("greater number is %d",b)
        :
            printf("greater number is %d",c));

}

