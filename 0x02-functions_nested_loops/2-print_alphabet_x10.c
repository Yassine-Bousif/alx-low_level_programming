#include "main.h"
/**
 * print_alphabet_x10 - a function that prints letters 10times
 */

void print_alphabet_x10(void)
{
	int count, x;

	for (count = 0; count <= 9; count++)
	{
		for (x = 'a'; x <= 'z'; x++)
			_putchar(x);
		_putchar('\n');
	}
}
