#include "main.h"

/**
 * _realloc - This function reallocates memory block
 * @ptr: Pointer to a variable address
 * @old_size: The size, in bytes of the allocated space for ptr
 * @new_size: The new size in bytes of the new memory block
 * Return: Return ptr, allocate new size
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	unsigned int x, n = new_size;
	char *oldp = ptr;

	if (ptr == NULL)
	{
		p = malloc(new_size);
		return (p);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);
	p = malloc(new_size);
	if (p == NULL)
	{
		return (NULL);
	}
	if (new_size > old_size)
		n = old_size;
	for (x = 0; x < n; x++)
	{
		p[x] = oldp[x];
	}
	free(ptr);
	return (p);
}
