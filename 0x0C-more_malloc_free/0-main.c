#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * main: To check the function
 *
 * Return: 0
 */
int main(void)
{

	char *c;

	c = malloc_checked(sizeof(char) * 1024);
	printf("%p\n", (void *)c);
	free(c);
	return (0);
}
