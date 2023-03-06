#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: String to be searched
 * @c: Character to search
 * Return: a pointer to the first occurrence of
 * the character c in the string s,
 * or NULL 0 if the character is not found
 */

char *_strchr(char *s, char c)
{
	int x;

	while (1)
	{
		x = *s++;
		if (x == c)
		{
			return (s - 1);
		}
			if (x == 0)
		{
			return (NULL);
		}
	}
}
