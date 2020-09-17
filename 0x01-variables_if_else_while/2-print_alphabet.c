#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase
 *
 * Return: 0
 */
int main(void)
{
	int alpha;
	for (alpha = 97; alpha <= 122; alpha++)
		putchar(alpha);
	/*Prints newline*/
	putchar(10);

	return (0);
}
