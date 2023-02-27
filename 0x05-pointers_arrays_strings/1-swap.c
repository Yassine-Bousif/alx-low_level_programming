#include "main.h"

/**
 * swap_int - swaps values of two int
 * @a: first integer to be swapped.
 * @b: second integer to be swapped.
 */

void swap_int(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
}
