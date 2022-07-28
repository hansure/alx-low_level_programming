#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * malloc_checked: Which allocate memory using malloc
 * @b: Integer, the size of memory to be assigned
 * Return: Pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{

	char *Ptr;

	Ptr = malloc(b);

	if (Ptr == NULL)
		exit(98);
	return (Ptr);
}
