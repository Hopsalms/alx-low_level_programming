#include <stdio.h>

/**
 * main - function to print combination of two numbers
 *
 * Return : 0 on success
 */

int main(void)
{
	int a = '0';
	int b = 'o';

	while (a <= '9')
	{
		while (b <= '9')
		{
			if (!(a > b) || a == b)
			{
				putchar(a);
				putchar(b);
				if (a == '8' && b == '9')
				{
					putchar('\n');
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
			b++;
		}
		b = '0';
		a++;
	}
return (0);
}
