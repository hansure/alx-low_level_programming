#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *str_concat(char *s1, char *s2)
{


	int i, j, k;
	char *newPtr = NULL;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[i] != '\0';j++)
		;
	newPtr = (char*)malloc((i + j) * sizeof(char));

	if (newPtr == NULL)
		return (NULL);
	for (k = 0; s1[k] != '\0'; k++)
		newPtr[k] = s1[k];
	for (k = 0; s2[k] != '\0'; k++)
		newPtr[k + i] = s2[k];

	return (newPtr);
}
