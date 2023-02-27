#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: Pointer to a string
 * Return: Length of the string
 */

int _strlen(char *s)
{
	int stlent = 0;

	while (s[stlent])
		++stlent;

	return (stlent);
}
