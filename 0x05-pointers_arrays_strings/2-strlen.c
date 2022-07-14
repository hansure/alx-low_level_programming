#include "main.h"

/**
 * _strlen: Return the length of the string
 * s: Input string that will be counted
 *
 * REturn: String length
 */
int _strlen(char *s)
{

	int c = 0;

	for (; *s != '\0'; s++)
	{
	
		c++;
	}

	return (c);
}
