#include"main.h"

/**
 * _strcat - concatenate two strings.
 * @dest: the parameter needs to be chcked.
 * @src: the parameter needs to be chcked.
 * return: dest.
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
