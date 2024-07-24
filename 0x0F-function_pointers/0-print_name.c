#include "function_pointers.h"

/**
 * print_name - This function prints a name
 * @name: first parameter
 * @f: Function to pointer
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
