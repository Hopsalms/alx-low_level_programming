#include "main.h"

/**
 * _calloc - This function allocates memory for an array
 * @nmemb: Parameter 1
 * @size: Parameter 2
 * Return: NULL if nmemb is 0 and malloc fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *str;
	unsigned int a;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	str = malloc(nmemb * size);
	if (str == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < (nmemb * size); a++)
		str[a] = 0;
	return (str);
}
