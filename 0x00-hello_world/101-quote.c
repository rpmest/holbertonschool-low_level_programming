#include <stdio.h>

/**
 * main - Prints "and that piece..." to stderr
 *
 * Return: 1 (error)
 */
int main(void)
{
	write(2, "and that piece of art is useful\"", 32);
	write(2," - Dora Korpar, 2015-10-19\n", 27);
	return (1);
}
