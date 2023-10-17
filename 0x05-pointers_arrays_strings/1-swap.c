#include "main.h"

/**
 * swap_int - function main
 * @a: first parameter
 * @b: second parameter
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
