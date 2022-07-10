// C/C++ program for decimal to binary
// conversion using recursion
#include <stdio.h>
int dectobin(int decimal_number);
int dectobin(int decimal_number)
{
	if (decimal_number == 0)
		return 0;
	else
		return (decimal_number % 2 + 10 *
				dectobin(decimal_number / 2));
}
void main()
{
	int no;
	printf("enter the decimal number:\n");
	scanf("%d",&no);
	printf("%d", dectobin(no));
}
