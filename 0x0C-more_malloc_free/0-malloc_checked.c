#include "main.h"

/**
 * malloc_checked - This function allocates memory
 * @b: The parameter declared
 * Return: A pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *result;

	result = malloc(b);
	if (result == NULL)
	{	exit(98);
	}
	return (result);
}
