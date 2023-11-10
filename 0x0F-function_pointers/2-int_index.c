#include "function_pointers.h"

/**
 * int_index - This function searches for integer
 * @array: array of integers
 * @size: size of array
 * @cmp: compare
 * Return: -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int b;

	if (array == 0 || size <= 0 || cmp == NULL)
		return (-1);
	for (b = 0; b < size; b++)
	{
		if (cmp(array[b]))
			return (b);
	}
	return (-1);

}

