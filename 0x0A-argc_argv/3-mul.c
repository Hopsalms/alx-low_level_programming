#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - This is the main function
 * @argc: The number of arguement passed to the program
 * @argv: The arguement vector
 *Return: 1
 */

int main(int argc, char *argv[])
{
int j, k, multiplication = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		j = atoi(argv[1]);
		k = atoi(argv[2]);

		multiplication = j * k;
		printf("%d\n", multiplication);
	}
	return (0);
}
