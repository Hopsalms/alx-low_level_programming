#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - This funtion returns the sum of two numbers.
 * @a: 1st parameter
 * @b: 2nd parameter
 * Return: The sum of a and b.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - This function returns the difference of two numbers.
 * @a: 1st parameter
 * @b: 2nd parameter
 * Return: The difference of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - This function returns the product of two numbers.
 * @a: 1st parameter
 * @b: 2nd parameter
 * Return: The product of a and b.
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - This function returns the division of two numbers.
 * @a: 1st parameter
 * @b: 2nd parameter
 * Return: The quotient of a and b.
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - This funtion returns the remainder of the division of two numbers.
 * @a: 1st parameter
 * @b: 2nd parameter
 * Return: The remainder of the division of a by b.
 */

int op_mod(int a, int b)
{
	return (a % b);
}
