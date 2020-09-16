#include <stdio.h>

/**
 * main - Prints "and that piece..." to stderr
 *
 * Return: 1 (error)
 */
int main(void)
{
	perror("and that piece of art is useful\"");
	perror(" - Dora Korpar, 2015-10-19\n");
	return (1);
}
