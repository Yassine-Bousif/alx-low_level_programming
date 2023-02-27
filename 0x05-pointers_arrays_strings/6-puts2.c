#include "main.h"

/**
 * puts2 - pritnts every other character string starting with the first
 * @str: string to print
 */

void puts2(char *str)
{
	int x = 0;

	while (str[x])
	{
		if (x % 2 == 0)
			_putchar(str[x]);
		x++;
	}
	_putchar('\n');
}
