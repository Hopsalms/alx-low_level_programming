#include "main.h"

/**
 * _pow_recursion - This function returns the value  of x^y
 * @x: The 1st parameter
 * @y: The 2nd parameter
 * Return: 0 or -1
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, (y - 1)));
}
