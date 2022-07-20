#include "main.h"

/**
 * _print_rev_recursion: Print a string in a reverse order
 * s: Input string
 *
 * Return: 1(success), 0(error)
 */
void _print_rev_recursion(char *s)
{

	if (*s != '\0')
	{
	
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
