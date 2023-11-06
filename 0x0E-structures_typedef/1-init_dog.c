#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - This function initializes a variable type struct dog
 * @d: The pointer address
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	(*d).name = name;
	d->age = age;
	d->owner = owner;
}
