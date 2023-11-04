#include "main.h"

/**
 *_strlen_recursion - This function returns the length of a string
 *@s: This is the declared parameter
 *Return: The value of strlen
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
