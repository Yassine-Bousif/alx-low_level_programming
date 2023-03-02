#include "main.h"

/**
 * *cap_string - a function that capitalizes all words of a string.
 *
 * @s: A string that will be capitalized
 * Return: the capitalized string
 */

char *cap_string(char *s)
{
	int x, y;

	char spe[13] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};

	for (x = 0; s[x] != '\0'; x++)
	{
		if (x == 0 && s[x] >= 'a' && s[x] <= 'z')
			s[x] -= 32;

		for (y = 0; y < 13; y++)
		{
			if (s[x] == spe[y])
			{
				if (s[x + 1] >= 'a' && s[x + 1] <= 'z')
				{
					s[x + 1] -= 32;
				}
			}
		}
	}

	return (s);
}
