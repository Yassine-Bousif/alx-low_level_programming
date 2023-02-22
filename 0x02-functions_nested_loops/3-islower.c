#include "main.h"
/**
 * _islower - function that check if char is lowercase
 * @c: contains value to be verified
 * Return: 1 if true, and 0 if false
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
