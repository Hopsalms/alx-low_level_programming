#include "function_pointers.h"

/**
 * array_iterator - This function executes a function given as a parameter
 * @array: Array of integers
 * @size: The size of array
 * @action: Pointer to the function
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int j;

	if (size == 0 || action == NULL || array == NULL)
		return;
	for (j = 0; j < size; j++)
	{
		action(array[j]);
	}
}
