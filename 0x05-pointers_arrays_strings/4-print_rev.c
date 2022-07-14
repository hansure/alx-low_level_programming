#include "main.h"

/**'
 * print_rev: Prints a string in reverse order
 * s: string to be print
 *
 * REturn: void(nothing to be returned)
 */
void print_rev(char *s)
{

	int c = 0;

	while (s[c] != '\0')
	{
	
		c++;
	}

	for (c -= 1; c >= 0; c--)
	{
	
		_putchar(s[c]);
	}

	_putchar('\n');
}
