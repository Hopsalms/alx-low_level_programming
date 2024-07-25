#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - This function prints number
 * @separator: The string to be printed
 * @n: The numbers of integers passed to the function
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int x, arr;

	va_list p;

	va_start(p, n);
	for (x = 0; x < n; x++)
	{
		arr = va_arg(p, const unsigned int);
		printf("%d", arr);

		if (x != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
}
