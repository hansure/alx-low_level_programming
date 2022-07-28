#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range: Store array elemnts ascending order in memory
 * @men: Minimum number
 * @max: Maximum number
 * Return: pointer to the created array
 */

int *array_range(int min, int max)
{

	int *arr;
	int i;

	if (min > max)
		return (NULL);

	arr = malloc(max - min + 1);
	
	if (arr == NULL)
		return (NULL);

	for (i = 0; i <= (max - min); i++)
		arr[i] = min + i;

	return (arr);
}
