#include"main.h"

/**
 * print_numbers - a func that prints numbers from 0 to 9
 *
 * Return: void
 */

int print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
		_putchar(i + '0');
	_putchar('\n');
}
