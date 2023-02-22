#include "main.h"
/**
 * print_alphabet - entry point
 * _putchar function will print letters in lowecase
 * Return: always 0;
 */

void print_alphabet(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
		_putchar(x);
	_putchar(\'n');
}
