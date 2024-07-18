#include "main.h"
#include <stdlib.h>
#include <ctype.h>

/**
 * main - The funtion entry point
 * @argc: The number of arguments passed
 * @argv: The argument vector strings.
 * Return: 0 on success, 98 for errors.
 */

int main(int argc, char *argv[])
{
	char *result, *Num1, *Num2;
	unsigned int a, b, n, m;
	int index;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	Num1 = argv[1];
	Num2 = argv[2];
	for (a = 0, n = _strlen(Num1); a < n; ++a)
	{
		if (!isdigit(Num1[a]))
		{
			printf("Error\n");
			exit(98); /* It contains non-digit chars */
		}
	}
	for (b = 0, m = _strlen(Num2); b < m; ++b)
	{
		if (!isdigit(Num2[b]))
		{
			printf("Error\n");
			exit(98); /* It contains non-digit chars */
		}
	}
	result = multiply(Num1, Num2);
	/* Find the position of the 1st non-zero digit */
	index = 0;
	while (result[index] == '0' && result[index + 1] != '\0')
	{
		index++;
	}
	/* Print the result from the 1st non-zero digit */
	printf("%s\n", result + index);
	free(result);
	return (0);
}

/**
 * multiply - This function multiplies two positive numbers.
 * @Num1: The first parameter.
 * @Num2: The second parameter.
 * Return: The result of multiplication.
 */

char *multiply(char *Num1, char *Num2)
{
	char *result;
	int x, y, z;
	int product, carry;

	int Num1Len = _strlen(Num2);
	int Num2Len = _strlen(Num2);
	int resultLen = Num2Len + Num2Len;

	result = malloc(sizeof(char) * (resultLen + 1));
	if (result == NULL)
	{
		exit(98); /* memory alloc failed*/
	}
	/* Initialize result array with '0's */
	for (x = 0; x < resultLen; ++x)
	{
		result[x] = '0';
	}
	result[resultLen] = '\0';
	for (y = Num1Len - 1; y >= 0; --y)
	{
		carry = 0;
		for (z = Num2Len - 1; z >= 0; --z)
		{
			/* Calc. product and update carry */
			product = ((Num1[y] - '0') * (Num2[z] - '0') +
					(result[y + z + 1] - '0') + carry);
			carry = product / 10;
			result[y + z + 1] = ((product % 10) + '0'); /* Update the result */
		}
		result[y] += carry; /*  Update result with final carry */
	}
	return (result);
}

/**
 * _strlen - This function returns the length of a string
 * @s: Parameter declared
 * Return: String length
 */

int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		s++;
		count++;
	}
	return (count);
}
