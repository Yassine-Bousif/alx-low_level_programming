#include <stdio.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * Return: Always 0
 */

int main(void)
{
	long int x = 612852475143;
	long int y;

	for (y = 2; y < x; y++)
	{
		while (x % y == 0)
			x /= y;
	}

	printf("%ld\n", x);

	return (0);
}
