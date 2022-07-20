#include "main.h"

/**
 * palind2: Obtain the length of a
 * a: string
 * l: integer to count length
 *
 * Return 1(success), -1(error)
 */

int palind2(char *a, int l)
{

	if (*a == 0)
		return (l - 1);
	return (palind2(a + l, l + 1));
}

/**
 * palind3: Compares string vs reverse of the given string
 * a: string
 * l: length
 *
 * Return: 1(success), -1(error)
 */

int palind3(char *a, int l)
{

	if (*a != *(a + l))
		return (0);
	else if (*a == 0)
		return (1);
	return (palind3(a + l, l - 2));
}

/**
 * is_palindrome: checks if a string is palindrome or not
 * s: string
 * Return: 1(success), -1(error)
 */
int is_palindrome(char *s)
{

	int l;

	l = palind2(s, 0);
	return (palind3(s, l));
}






