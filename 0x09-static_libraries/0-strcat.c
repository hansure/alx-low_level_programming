#include "main.h"
#include <stdio.h>

/**
 * _strcat: Concatenate two string
 * dest: Destination string
 * src: Source string
 *
 * REturn: Pointer to the dest
 */

char *_strcat(char *dest, char *src)
{

	int dlen = 0, i;
	while (dest[dlen])
	{
	
		dlen++;
	}

	for (i = 0; src[i] != 0; i++)
	{
	
		dest[dlen] = src[i];
		dlen++;
	}

	dest[dlen] = '\0';
	return (dest);


}
