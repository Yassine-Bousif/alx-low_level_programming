#include "main.h"
/**
 * main - print_alphabet
 * letter in lowecase
 * Return: always 0;
 */

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
