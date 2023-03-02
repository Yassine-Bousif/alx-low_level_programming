#include"main.h"

/**
 * reverse_array - function that reverses the content of an array of integers.
 *
 * @a: The array of integers to be reversed
 * @n: The number of elements in the array
 *
 */

void reverse_array(int *a, int n)
{
	int x, y, tmp;

	y = n - 1;

	for (x = 0; x < n / 2; x++)
	{
		tmp = a[x];
		a[x] = a[y];
		a[y--] = tmp;
	}
}
