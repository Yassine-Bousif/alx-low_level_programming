#include "main.h"

/**
* _isupper - a function that checks if a character is uppercase or not
* @c: character to be evaluated
* Return: returns 1 if uppercase, 0 if not
*/

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
