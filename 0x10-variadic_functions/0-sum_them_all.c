#include "variadic_functions.h"

/**
 * sum_them_all - This functions returns the sum of all its parameters
 * @n: The number of argument to be passed
 * Return: The sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0;
	unsigned int a;

	va_list arg;

	va_start(arg, n);

	for (a = 0; a < n; a++)
	{
		if (n == 0)
		{
			return (0);
		}
		else
		{
			sum += va_arg(arg, unsigned int);
		}
	}
	va_end(arg);
	return (sum);
}
