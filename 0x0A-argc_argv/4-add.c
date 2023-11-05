#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "main.h"

/**
  * check_num - The function name
  * @str: The string parameter
  * Return: 0
  */
int check_num(char *str)
{
	unsigned int count;

	count = 0;
	while (count < strlen(str))
	{
	if (!isdigit(str[count]))
	{
		return (0);
	}
	count++;
	}
		return (1);
}


/**
  * main - The function entry point
  * @argc: The number of arguments passed to the program
  * @argv: The argument vector
  * Return: 0
  */


int main(int argc, char *argv[])
{
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;
	while (count < argc)
	{
		if (check_num(argv[count]))
		{
			str_to_int = atoi(argv[count]);
			sum += str_to_int;
		}
	/*Condition if one of the number contains symbols that are not digits*/
		else
		{
			printf("Error\n");
			return (1);
		}
		count++;
		}
	printf("%d\n", sum);
	return (0);
}
