#include "main.h"
/**
 *_isalpha - function that check if char is lower or upper
 * @c: contains char value to be verified
 * Return: 1 if true and 0 if false
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
