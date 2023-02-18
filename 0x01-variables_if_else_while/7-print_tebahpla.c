#include <stdio.h>
/**
 * main - Entry point
 * THIS IS a program that prints the lowercase alphabet in reverse
 * followed by a new line.
 * Return: Always 0 (success)
 */
int main(void)
{
	int a;

	for (a = 'z'; a >= 'a'; a--)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
