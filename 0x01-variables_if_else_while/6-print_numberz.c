#include <stdio.h>
/**
 * main - Entry point
 * THIS IS  a program that prints all single digit numbers of base 10
 * starting from 0 followed by a new line.
 * Return: Always 0 (success)
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar(a + '0');
	}
	putchar('\n');
	return (0);
}
