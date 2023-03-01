#include"main.h"

/**
 * *_strncpy -  copies a string in a similar way to strncpy.
 *
 * Use man strncpy to learn more.
 * @dest: the buffer storing the string copy.
 * @src: The source string.
 * @n: The maximum nymber of bytes to copied from src.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; src[x] && x < n; x++)
		dest[x] = src[x];
	for ( ; x < n; x++)
		dest[x] = '\0';
	return (dest);
}
