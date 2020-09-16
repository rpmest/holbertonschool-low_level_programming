#include <stdio.h>

/**
 * main - Prints the size of variable types
 *
 * Return: 0
 */
int main(void)
{
	printf("Size of a char: %i byte(s)\n", (int) sizeof(char));
	printf("Size of an int: %i byte(s)\n", (int) sizeof(int));
	printf("Size of a long: %i byte(s)\n", (int) sizeof(long));
	printf("Size of a long long int: %i byte(s)\n", (int) sizeof(long long));
	printf("Size of a float: %i byte(s)\n", (int) sizeof(float));

	return (0);
}
