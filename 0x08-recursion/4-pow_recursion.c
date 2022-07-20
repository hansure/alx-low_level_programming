#include "main.h"

/**
 * _pow_recursion: Calculate x the power of y
 * x: int
 * y: int
 *
 * Return: 1(success), -1(fail)
 */

int _pow_recursion(int x, int y)
{

	if (y > 0)
	{
	return (x * _pow_recursion(x, y - 1));
	}
	else if ( y == 0)
		return (1);
	else
		return (-1);
}
