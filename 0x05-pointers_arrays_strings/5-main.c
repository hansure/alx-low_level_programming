#include "main.h"
#include <stdio.h>

/**
 * main: Check the code
 *
 * Return: always 0
 */
int main(void)
{

	char s[10] = "My School";

	printf("%s\n", s);
	rev_string(s);
	printf("%s\n", s);
	return (0);
}
