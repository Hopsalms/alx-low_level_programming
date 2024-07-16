#include "main.h"

/**
* strtow - This function splits string into word
* @str: The parameter
* Return: A pointer to an array of strings
*/
char **strtow(char *str)
{
	int a, flag, len;
	char **words;

	if (str == NULL || str[0] == '\0' || (str[0] == ' ' && str[1] == '\0'))
	return (NULL);

	a = flag = len = 0;
	while (str[a])
	{
	if (flag == 0 && str[a] != ' ')
	flag = 1;
	if (a > 0 && str[a] == ' ' && str[a - 1] != ' ')
	{
		flag = 0;
		len++;
	}
	a++;
	}

	len += flag == 1 ? 1 : 0;
	if (len == 0)
	return (NULL);

words = (char **)malloc(sizeof(char *) * (len + 1));
	if (words == NULL)
	return (NULL);

	util(words, str);
	words[len] = NULL;
	return (words);
	}

/**
* util - function for fetching words into an array
* @words: The first parameter
* @str: The second parameter (str)
*/
void util(char **words, char *str)
{
	int a, b, start, flag;

	a = b = flag = 0;
	while (str[a])
	{
		if (flag == 0 && str[a] != ' ')
		{
			start = a;
			flag = 1;
		}

	if (a > 0 && str[a] == ' ' && str[a - 1] != ' ')
	{
		create_word(words, str, start, a, b);
			b++;
			flag = 0;
	}

	a++;
	}

	if (flag == 1)
		create_word(words, str, start, a, b);
	}

/**
* create_word -  This function creates a word and insert it into the array
* @words: 1st parameter, array of strings
* @str: 2nd parameter, string
* @start: This is the begining index of the word
* @end: This the end index of the word
* @index: This is the index of the array to insert the word
*/
void create_word(char **words, char *str, int start, int end, int index)
{
	int c, d;

	c = end - start;
	words[index] = (char *)malloc(sizeof(char) * (c + 1));

	for (d = 0; start < end; start++, d++)
	words[index][d] = str[start];
	words[index][d] = '\0';
}
