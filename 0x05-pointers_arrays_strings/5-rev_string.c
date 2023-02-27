#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the string that’s needs to be reversed
 */

void rev_string(char *s)
{
	int x = 0;
	int y = 0;
	char temp;

	while (s[x])
		x++;

	while (x > y)
	{
		temp = s[--x];
		s[x] = s[y];
		s[y++] = temp;
	}
}
