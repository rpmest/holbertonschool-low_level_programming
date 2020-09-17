#include <stdio.h>

/**
 * main - Prints single-digit numbers (base 10) separated by commas and spaces
 *
 * Return: 0
 */
int main(void)
{
	int num;

	for (num = 48; num <= 57; num++)
	{
		putchar(num);

		/* Prints comma and space */
		if (num != 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	/* Prints newline */
	putchar(10);

	return (0);
}
