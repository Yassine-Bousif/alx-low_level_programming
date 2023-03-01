#include"main.h"

/**
 * *_strncat - A function that concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: the number of bytes from src
 * return: a pointer to resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	for (x = 0; dest[x]; x++)
		;
	for (y = 0; src[y] && y < n; y++)
		dest[x + y] = src[y];
	dest[x + y] = '\0';
	return (dest);
}
