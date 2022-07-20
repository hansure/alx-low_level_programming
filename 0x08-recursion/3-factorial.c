#include "main.h"

/**
 * factorial: The function to get the factorial value of the number
 * n: the number
 * Return: result
 */

int factorial(int n)
{

	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return n * factorial(n - 1);

}
