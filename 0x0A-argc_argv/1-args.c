#include <stdio.h>
#include "main.h"

/**
 * main - The function name
 * @argc: The number of arguement passed to the program
 * @argv: The arguement vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
