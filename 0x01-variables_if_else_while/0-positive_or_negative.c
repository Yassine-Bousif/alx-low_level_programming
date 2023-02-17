#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - if statments
 * THIS IS a program that checks if a number is positive or negative
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n");
	}
	if (n == 0)
	{
		printf("%d is zero\n");
	}
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
