#include "main.h"

/**
 * Positive_or_negative
 * REturn: sign
 */


int positive_or_negative(int num)
{

	if (num > 0)
	{
	
		printf("%d is positive", num);
	}
	else if (num == 0)
	{
	
		printf("%d is zero", num);
	}
	else
	{
	
		printf("%d is negative", num);
	}

	return (0);
}
