#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * create_array: Accept the size of the character and character itself and create array
 * @size: Size of character
 * @c: Input character
 * Return: Null if size 0 or pointer to the array
 */

char *create_array(unsigned int size, char c)
{


	char *p;
	unsigned int i = 0;
	p = malloc(sizeof(*p) * size);
	if (size == 0)
		return (NULL);
	else
	{
		while(i <= size)
		{
		
			p[i] = c;
			i++;
		}

		return (p);
	}
}
