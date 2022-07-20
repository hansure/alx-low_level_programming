#include "main.h"

/**
 * _strlen_recursion: The function to count the number of character in a string
 * s: Input string
 * Return: 1(on success), 0 (fail) 
 */

int _strlen_recursion(char *s)
{

	if ( *s != '\0')
	{
	
		return (1 + _strlen_recursion(s + 1));
	}

	return (0);
}
