#include "main.h"

/**
 * string_toupper: Changes all lowercase letters to uppercase letter
 * p: String that will be modified
 *
 * Return: char var
 */

char *string_toupper(char *p)
{
	int a = 0;
	while (p[a])
	{
	
		if ( a >= 97 && p[a] <= 122)
		{
		
			p[a] = p[a] - 32;
		}

		a++;
	}

	return (p);
}
