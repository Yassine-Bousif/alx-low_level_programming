#include <stdio.h>
/**
* main - a function that prints out first 50
* starting with 1 and
* fibonacci numbers
* Return: Always 0
*/

int main(void)
{
	int cop;
	unsigned long x1 = 0, x2 = 1, x3;
	for (cop = 0; cop < 50; cop++)
	{
		x3 = x1 + x2;
		printf("%lu", x3);
		x1 = x2;
		x2 = x3;

	if (cop == 49)
		printf("\n");
	else
		printf(", ");

	}

	return (0);
}
