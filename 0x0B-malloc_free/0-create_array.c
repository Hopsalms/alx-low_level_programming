#include "main.h"

/**
 * create_array - This function create arrays of chars
 * @size: The size of array
 * @c: The parameter to assign
 *Return: Pointer to array or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int a;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == 0)
	{
		return (NULL);
	}
	for (a = 0; a < size; a++)
	{
		str[a] = c;
	}
	return (str);
}
