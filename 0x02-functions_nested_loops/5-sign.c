#include "main.h"
/**
* print_sign - function that prints sign of a number +/-/0
* @n: number to be verified
* Return: 0 if entered num is 0, 1 if num is positive,
* -1 if num is negative
*/

int print_sign(int n)
{
	if (n == 0)
		{
		_putchar('0');
		return (0);
		}
	else if (n > 0)
		{
		_putchar('+');
		return (1);
		}
	else
		{
		_putchar('-');
		return (-1);
		}
}
