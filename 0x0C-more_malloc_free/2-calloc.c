#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _calloc: allocate memory for an array
 *
 * @nmemb: Number of elemnts of array
 * @size: Size of each element
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{

	char *a;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	a = malloc(nmemb * size);
	if (a == NULL)
		return (NULL);

	for (i = 0; i < nmemb *size; i++)
	{
	
		a[i] = 0;
	}

	return ((void *) a);






}

