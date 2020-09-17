#include <stdio.h>

/**
 * main - Prints the alphabet except letters q and e
 *
 * Return: 0
 */
int main(void)
{
	int low;

	for (low = 97; low <= 122; low++)
	{
		if (!((char)low == 'q' || (char)low == 'e'))
			putchar(low);
	}
	/*Prints newline*/
	putchar(10);

	return (0);
}
