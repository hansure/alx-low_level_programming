#include <stdio.h>
#include "dog.h"
/**
 * main
 * return: 0
 */

int main(void)
{

	struct dog my_dog;

	my_dog.name = "Poppy";
	my_dog.age = 3.5;
	my_dog.owner = "Surafel";
	printf("My name is %s, and I am %.1f :  - woof!\n", my_dog.name, my_dog.age);
	return (0);
}
