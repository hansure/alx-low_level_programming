#ifndef _HEADER_
#define _HEADER_

/**
 * * struct dog: Dog attributes
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 */

struct dog {

	char *name;
	float age;
	char *owner;
};
/**
 * dog_s: Typedef for dog structure
 */

typedef struct dog dog_s;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_s *new_dog( char *name, float age, char *owner);
void free_dog(dog_s *d);

#endif
