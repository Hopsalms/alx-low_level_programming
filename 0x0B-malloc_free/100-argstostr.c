#include "main.h"

/**
 * argstostr - This function concatenates all the arguments
 * @ac: !st parameter declared
 * @av: 2nd parameter declared
 * Return: A pointer to a new srrings or NULL if fails
 */

char *argstostr(int ac, char **av)
{
	int c, j, m = 0, n = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (c = 0; c < ac; c++)
	{
		for (j = 0; av[c][j]; j++)
			n++;
	}
	n += ac;
	str = malloc(sizeof(char) * n + 1);

	if (str == NULL)
		return (NULL);
	for (c = 0; c < ac; c++)
	{
	for (j = 0; av[c][j]; j++)
	{
		str[m] = av[c][j];
		m++;
	}
	if (str[m] == '\0')
	{
		str[m++] = '\n';
	}
	}
	return (str);
}
