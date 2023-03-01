#include "main.h"

/**
 * _strcmp - a func that compares two strings
 *
 * @s1: first string to compare
 * @s2: second string to compare
 *
 * Return: less than 0 if s1 is less than s2, 0 if they're equal,
 * more than 0 if s1 is greater than s2
 */

int _strcmp(char *s1, char *s2)
{
	int x;

	for (x = 0; s1[x] && s2[x] && s1[x] == s2[x]; i++)
		;
	return (s1[x] - s2[x]);
}
