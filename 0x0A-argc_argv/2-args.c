#include <stdio.h>

/**
 * main - prints all arguments it receives
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0
 */

int main(__attribute__((unused)) int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
		printf("%s\n", argv[x]);
	return (0);
}
