#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers (base 10)
 *
 * Return: 0
 */
int main(void)
{
	int num1, num2;

	for (num1 = 48; num1 <= 57; num1++)
	{
		for (num2 = 48; num2 <= 57; num2++)
		{
			putchar(num1);
			putchar(num2);

			/* Prints comma and space*/
			if (!(num1 == 57 && num2 == 57))
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
