#include <stdio.h>
#include "dog.h"

int main(void)
{

	dog_s my_dog;

	my_dog.name = "Poppy";
	my_dog.age = 3.5;
	my_dog.owner = "Surafel";
	printf("My name is %s, and I %.1f :) - Woof!\n", my_dog.name, my_dog.age);
	return (0);
}
