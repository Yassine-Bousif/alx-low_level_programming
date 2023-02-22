#include"main.h"
/**
 *
 * print_last_digit - prints last digit of a number
 * @x: takes inputed num
 * Return: last_num
 *
*/

int print_last_digit(int x)
{
	int last_num;

	if (x < 0)
		{
		last_num = -1 * (x % 10);
		_putchar (last_num + '0');
	return (last_num);
		}

	else
		{
		last_num = (x % 10);
		_putchar (last_num + '0');
	return (last_num);
		}

}
