#include "main.h"

/**
 * array_range - This function creates an array of integers
 * @min: Parameter 1, minimum range of values stored
 * @max: Parametr 2 maximum range of values stored and number of elements
 * Return: Pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *str;
	int n, size;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;
	str = malloc(sizeof(int) * size);
	if (str == NULL)
	{
		return (NULL);
	}
	for (n = 0; min <= max; n++)
	{
		str[n] = min++;
	}
	return (str);
}
