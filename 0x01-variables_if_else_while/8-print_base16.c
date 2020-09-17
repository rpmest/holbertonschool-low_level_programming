#include <stdio.h>

/**
 * main - Prints the numbers of base 16 in lowercase
 *
 * Return: 0
 */
int main(void)
{
	int num;

	for (num = 48; num < 64; num++)
	{
		if (num > 57)
		{
			putchar(num + 39);
		}
		else
		{
			putchar(num);
		}
	}
	/*Prints newline*/
	putchar(10);

	return (0);
}
