#include <stdio.h>

/**
 * main - Prints lowercase alphabet in reverse
 *
 * Return: 0
 */
int main(void)
{
	int alpha;

	for (alpha = 122; alpha >= 97; alpha--)
		putchar(alpha);
	/*Prints newline*/
	putchar(10);

	return (0);
}
