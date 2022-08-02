#include <stdlib.h>
#include "dog.h"

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
 *new_dog: object of the struct dog(dog_t)
 *@name: parametrs of the struct
 *@age: paramets
 *@owner: parametrs
 *Return: the object value which is my_dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{

	dog_t *my_dog;
	int name_l = 0, own_l = 0;

	if (name != NULL && owner != NULL)
	{
	
		name_l = _strlen(name) + 1;
		own_l = _strlen(owner) + 1;
		my_dog = malloc(sizeof(dog_t));

		if (my_dog == NULL)
			return (NULL);
		my_dog->name = malloc(sizeof(char) * name_l);

		if (my_dog->name == NULL)
		{
		
			free(my_dog);
			return (NULL);
		}

		my_dog->owner = malloc(sizeof(char) * own_l);

		if(my_dog->owner == NULL)
		{
		
			free(my_dog->name);
			free(my_dog);
			return (NULL);
		}

		my_dog->name = _strcpy(cutie_dog->name, name);
		my_dog->owner = _strcpy(my_dog->owner, owner);
		my_dog->age = age;
	}

	return (my_dog);
}

/**
 *_strlen:to get the length of the string
 *@s: Pointer to be passed
 *Return: the length of *s
 */
int _strlen(char *s)
{

	int i;
	
	if (*s++)
		i++;
	return (i);
}

/**
 *_strcpy: to copy src to dest
 *@dest: destination argument
 *@src: Source argument
 *Return: copy of the string
 */
char *_strcpy(char *dest, char *src)
{

	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i++] = '\0';

	return (dest);
}




