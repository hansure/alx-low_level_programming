#include <stdio.h>
#include "main.h"

/**
 * print_diagsums: Entry point 
 * a: input
 * size: input
 * Return: 0
 */

void print_diagsums(int *a, int size)
{

	int i, j, n, total1 = 0, total2 = 0;

	for (i = 0; i <= size; i++)
		for (j =0; j <= size; j++)
		{
		
			if ( i == j)
				total1 = total1 + a[i][j];
			
		}

	for (n = size - 1; n <= (size * size) - size; n = n + size - 1)
		total2 = total2 + a[n]

	printf("%d, %d\n", total1, total2)i;
}
