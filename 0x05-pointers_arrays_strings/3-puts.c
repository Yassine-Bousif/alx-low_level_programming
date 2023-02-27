#include"main.h"

/**
 * _puts -  prints a string,
 * @str: string to be printed
 */

void _puts(char *str)
{
	int x = 0;

	while (str[x])
		_putchar(str[x++]);

	_putchar('\n');
}
