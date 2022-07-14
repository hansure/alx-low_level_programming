#include "main.h"

/**
 * _isdigit: Checking weather the input is a character or number
 * x: The number to be checked
 *
 * Return: 1 if it is character otherwise 0
 */
int _isdigit(int x)
{

	if (x >= 48 && x <= 57)
	{
	
		return (1);
	}

	return (0);
}
