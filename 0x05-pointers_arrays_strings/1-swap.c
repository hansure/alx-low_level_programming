#include "main.h"

/**
 * swap_int: Swaping two integer values
 * a: integer to be swapped
 * b: another integer to be swapped
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{


	int aux;
	aux = *a;
	*a = *b;
	*b = aux;
}
