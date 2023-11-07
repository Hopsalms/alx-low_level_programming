#include "main.h"

/**
 * str_concat - This function concatenates two strings
 * @s1: The 1st parameter
 * @s2: The 2nd parameter
 * Return: NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int len1, len2, a, b;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = ""; /* Treat as an empty string */
	}
	if (s2 == NULL)
	{
		s2 = ""; /* Same as above */
	}
	len1 = 0;
	while (s1[len1] != '\0')
	{
		len1++;
	}
	len2 = 0;
	while (s2[len2] != '\0')
	{
		len2++;
	}
	ptr = malloc(sizeof(char) * (len1 + len2 + 1));

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (a = 0; a < len1; a++)
	{
		ptr[a] = s1[a];
	}
	for (b = 0; b <= len2; b++)
	{
		ptr[a] = s2[b];
		a++;
	}
	return (ptr);
}
