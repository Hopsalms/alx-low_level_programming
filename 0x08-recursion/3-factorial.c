#include "main.h"

/**
 * factorial - This function returns the factorial of a given number
 * @n: The declared parameter
 * Return: -1 or 1
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
