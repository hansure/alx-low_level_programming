#include "main.h"

/**
 * _strncpy: Copy a string
 * dest: destination
 * src: source string
 * n: copy limit
 *
 * Return: char valu
 */

char *_strncpy(char *dest, char *src, int n)
{
int a = 0, b = 0;

while (src[b])
{
b++;
}

while (a < n && src[a])
{


	dest[a] = src[a];
	a++;
}

while (a < n)
{

	dest[a] = '\0';
	a++;
}

return (dest);
}
