#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main: check the code
 *
 * Return: 0
 */
int main(void)
{

	char *s;

	s = str_concat("Betty", "Surafel");
	if (s == NULL)
	{
	
		printf("Failed\n");
		return (1);
	}

	printf("%s\n", s);
	free(s);
	return (0);
}
