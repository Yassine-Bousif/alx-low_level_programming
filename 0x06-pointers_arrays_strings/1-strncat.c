#include"main.h"

/**
 * *_strncat - A function that concatenates two strings
 *
 * @dest: destination string
 * @src: source string
 * @n: the number of bytes from src
 *
 * Return: a pointer to resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	x = 0;
	y = 0;

	while (dest[x] != '\0')
		x++;

	while (src[y] != '\0' && y < n)
	{
		dest[x] = src[y];
		x++;
		y++;
	}

	dest[x] = '\0';

	return (dest);
}
