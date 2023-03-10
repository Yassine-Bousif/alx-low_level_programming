#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the result of the addition, followed by a new line
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int x, y, sum = 0;

	for (x = 1; x < argc; x++)
	{

		for (y = 0; argv[x][y]; y++)
		{
			if (argv[x][y] < '0' || argv[x][y] > '9')
				return (printf("Error\n"), 1);
		}

		sum += atoi(argv[x]);
	}

	printf("%d\n", sum);
	return (0);
}
