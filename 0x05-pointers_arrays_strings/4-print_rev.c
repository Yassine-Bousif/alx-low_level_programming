#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: the string to be printed
 */

void print_rev(char *s)
{
	int x = 0;

	while (s[x])
		x++;
	while (x--)
		_putchar(s[x]);
	_putchar('\n');
}
