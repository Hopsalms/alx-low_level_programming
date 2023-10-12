#include "main.h"
/**
 * print_last_digit - prints the last digit in a set of numbers
 * @n: function to print the last diit
 * Return: k
 */

int print_last_digit(int n)
{
	int k;

	k = n % 10;
	if (n < 0)
		k = -k;
	_putchar(k + '0');
	return (k);
}
