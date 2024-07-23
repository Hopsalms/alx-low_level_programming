#ifndef DOG_H
#define DOG_H

/**
 * struct dog - This defines the structure of  the dog
 * @name: The name of the dog
 * @age: The age oft he dog
 * @owner: The owner of the dog
 *
 * Description: My first struct task
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
