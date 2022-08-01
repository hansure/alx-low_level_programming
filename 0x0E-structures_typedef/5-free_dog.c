#include <stdlib.h>
#include "dog.h"

/**
 * free_dog: make clean
 * @d: structure of dog
 * Return: nothing
 */

void free_dog(dog_s *d)
{

	if (d != NULL)
	{
	
		free(d->owner);
		free(d->name);
		free(d);
	}
}
