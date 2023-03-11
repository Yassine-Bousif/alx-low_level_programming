#include "main.h"

/**
 * _strcmp - compares two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: 0 if strings are equal, otherwise difference between first
 * different characters
 */

int _strcmp(char *s1, char *s2)
{
	int x;

	for (x = 0; s1[x] && s2[x] && s1[x] == s2[x]; x++)
		;
	return (s1[x] - s2[x]);
}
