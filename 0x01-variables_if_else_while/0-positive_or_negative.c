#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/*
 *  main - Prints a random number decides whether it is positive,negative,orzero.
 *  Return: Always 0
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%i is positive\n", n);
	else if (n < 0)
		printf("%i is negative\n", n);
	else
		printf("%i is zero\n", n);
	return (0);
}
