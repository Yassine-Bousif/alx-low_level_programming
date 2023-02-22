#include"main.h"
/**
 *
 * print_last_digit - prints last digit of a number
 * @x: takes inputed num
 * Return: last-num
 *
*/

int print_last_digit(int x)
{
	int last-num;

	if (x < 0)
		{
		last-num = -1 * (x % 10);
		_putchar (last-num + '0');
	return (last-num);
		}

	else
		{
		last-num = (x % 10);
		_putchar (last-num + '0');
	return (last-num);
		}

}
