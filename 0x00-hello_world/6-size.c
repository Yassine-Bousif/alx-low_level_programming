#include <stdio>
/**
 * main - program that prints the size of various types on the computer
 * Return: 0
 */
int main(void)
{
	printf("Size of a char: %tu byte(s)\n", sizeof(char));
	printf("Size of an int: %tu byte(s)\n", sizeof(int));
	printf("Size of a long int: %tu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %tu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %tu byte(s)\n", sizeof(float));
	return (0);
}

