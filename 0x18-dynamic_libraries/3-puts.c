#include "main.h"

/**
 * _puts: Print a string
 * str: The input string to be printed
 *
 * Return: void
 */
void _puts(char *str)
{

	for (; *str != '\0'; str++)
	{
	
		_putchar(*str);

	}
	_putchar('\n');
}
