#include <stdio.h>
#include "main.h"

/**
 * main - This function prints all arguments it receives
 * @argc: The number of arguments passed to the program
 * @argv: The arguement vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}
