#include <stdio.h>

/**
 * main - Prints each unique possible combination of three single-digit numbers
 *
 * Return: 0
 */
int main(void)
{
	int num1, num2, num3;

	num1 = 48;

	for (num1 = 48; num1 <= 57; num1++)
	{
		for (num2 = num1 + 1; num2 <= 57; num2++)
		{
			for (num3 = num2 + 1; num3 <= 57; num3++)
			{
				putchar(num1);
				putchar(num2);
				putchar(num3);

				/* Prints comma and space*/
				if (!(num1 == 55 && num2 == 56 && num3 == 57))
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	/* Prints newline */
	putchar(10);

	return (0);
}
