#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _str_len: To get the length of the string
 * s1: pointer to be passed
 * Return: the length(i)
 */

int _str_len(char *s1)
{

	int i;
	i = 0;

	while (*s1++)
		i++;
	return (i);

}

/**
 * string_nconcat: concats two string
 * s1: Firs string
 * s2: Second string
 * Return: pointer to concatenated string
 *
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	char *c;
	unsigned int i, k, a;
	i = _str_len(s1);
	k = _str_len(s2);
       if (k > n)
	       k = n;
       k += i;
	c = malloc(sizeof(char) * (k + 1));
	if (c == NULL)
		return (NULL);
	for ( a = 0; a < i; a++)
		c[a] = *(s1 + a);
	for (i = 0; a < k; i++)
		c[a++] = *(s2 + i);
	c[a] = '\0';
	return (c);









}
