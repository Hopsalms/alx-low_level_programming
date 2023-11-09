#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - This function prints strings
 * @separator: The string to be printed between the strings
 * @n: The number of string passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	char *str;

	va_list ptr_str;

	va_start(ptr_str, n);

	for (x = 0; x < n; x++)
	{
		str = va_arg(ptr_str, char *);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (x != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ptr_str);
}
