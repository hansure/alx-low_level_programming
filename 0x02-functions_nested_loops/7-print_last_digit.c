#include "main.h"

/**
 * The function to print the last digit from the given integer
 * Return last digit
 */

int print_last_digit(int ip)
{
	int inNum;
	inNum = (ip % 10);
	if(inNum <0)
	{
		inNum = (-inNum);
	}
	_putchar(inNum + '0');


return (inNum);
}
