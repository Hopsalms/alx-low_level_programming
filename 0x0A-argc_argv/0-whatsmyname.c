#include <stdio.h>
#include "main.h"

/**
 * main - This function prints its name
 * @argc: The number of arguement passed to the program
 * @argv: This is the arguement vector
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
