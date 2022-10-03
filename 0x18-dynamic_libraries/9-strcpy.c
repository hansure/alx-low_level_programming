#include "main.h"

/**
 * _strcpy: Copying a string
 * dest: Destination of the string
 * src: Source value of the string
 *
 * Return: Pointer
 */

char *_strcpy(char *dest, char *src)
{

	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
	
		dest[i] = src[i];
	}
	dest[i++] = '\0';

	return (dest);
}
