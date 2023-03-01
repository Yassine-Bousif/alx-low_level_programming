#include"main.h"

/**
 * _strcat - is a function that concatenate two strings.
 * @dest: the parameter needs to be chcked.
 * @src: the parameter needs to be chcked.
 * return: dest.
 */

char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}
	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}
	*ptr = '\0';
	return (dest);
