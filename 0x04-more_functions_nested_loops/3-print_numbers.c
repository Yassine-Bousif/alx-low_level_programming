#include"main.h"

/**
 * print_numbers - a func that prints numbers from 0 to 9
 *
 * Return: Always 0
 */

int print_numbers(void)
{
	int x;

	for (x = 0; x < 10; x++)
		{
		_putchar(x + '0');
		}

	return (0);
}
