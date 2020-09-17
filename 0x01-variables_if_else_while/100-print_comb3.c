#include <stdio.h>

/**
 * main - Prints each possible combination of single-digit numbers just once
 *
 * Return: 0
 */
int main(void)
{
	int num1, num2, inc;

	inc = 48;

	for (num1 = 48; num1 <= 57; num1++)
	{
		inc++;
		for (num2 = inc; num2 <= 57; num2++)
		{
			putchar(num1);
			putchar(num2);

			/* Prints comma and space*/
			if (!(num1 == 56 && num2 == 57))
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	/* Prints newline */
	putchar(10);

	return (0);
}
