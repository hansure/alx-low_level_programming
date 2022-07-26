#include "main.h"
#include <stdlib.h>
#include <stddef.h>

int _strlen(char *s)
{

	int i;
	i = 0;

	while (*s++)
	{
	
		i++;
	}
	return (i);
}

char *str_concat(char *s1, char *s2)
{

	char *newPtr;
	int i;
	newPtr = (char*)malloc(sizeof(char) * ((_strlen(s1) + _strlen(s2) + 1)));

	if (!newPtr)
	{
	
		return NULL;
	}

	while (*s1)
		newPtr[i++] = *s1++;
	while (*s2)
		newPtr[i++] = *s2++;
	newPtr[i] = '\0';

	return (newPtr);
}
