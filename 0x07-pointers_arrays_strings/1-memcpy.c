#include "main.h"

/**
 * _memcpy -   copy number bytes form memory area to another
 *
 * @dest: content is to be copied
 * @src: Source of data to be copied
 * @n: bytes of the memory
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}

	return (dest);
}
