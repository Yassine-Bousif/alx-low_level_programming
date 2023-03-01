#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * return: pointer to resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int x, y;

	for (x = 0; dest[x]; x++)
		;
	for (y = 0; src[y]; y++)
		dest[x + y] = src[y];
	dest[x + y] = '\0';
	return (dest);
}
