#include "main.h"

/**
 *_strdup - This function returns a pointer to a newly
 *allocated space in memory
 *@str: String pointer
 *Return: NULL if str = NULL or pointer to duplicated string
 */

char *_strdup(char *str)
{
	unsigned int a, j;
	char *strdout;

	if (str == NULL)
	{
		return (NULL);
	}
	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}
	strdout = (char *)malloc(sizeof(char) * (a + 1));

	if (strdout == NULL)
	{
		return (NULL);
	}
	for (j = 0; j <= a; j++)
	{
		strdout[j] = str[j];
	}
	return (strdout);
}
