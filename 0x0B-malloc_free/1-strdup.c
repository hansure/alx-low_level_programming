#include "main.h"
#include <stddef.h>
#include <stdlib.h>

int _strlen(char *s)
{

	int i;

	i = 0;
	while (*s++)
		i++;
	return (i);
}

char *_strdup(char *src)
{

	char *new;
	int i;

	i = 0;
	if (!(new = (char*)malloc(sizeof(char) * _strlen(src) + 1)))
		return NULL;
	while (*src)
		new[i++] = *src++;
	new[i] = '\0';
	return (new);
}
