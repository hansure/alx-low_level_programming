#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int _str_len(char *s)
{

	int i;

	while (*s++)
	{
	
		i++;
	}

	return (i);
}

char *str_concat(char *s1, char *s2)
{


	int i, j, k;
	char *newPtr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = _str_len(s1);
	j = _str_len(s2) - i; 
	newPtr = (char*)malloc((i + j) * sizeof(char));

	if (newPtr == NULL)
		return (NULL);
	for (k = 0; s1[k] != '\0'; k++)
		newPtr[k] = s1[k];
	for (k = 0; s2[k] != '\0'; k++)
		newPtr[k + i] = s2[k];

	return (newPtr);
}
