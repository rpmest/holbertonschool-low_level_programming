#include <stdio.h>

/**
 * main - Prints "and that piece..." to stderr
 *
 * Return: 1 (error)
 */
int main(void)
{
	errno = NULL;
	fprintf(stderr, "and that piece of art is useful\"");
	fprintf(stderr," - Dora Korpar, 2015-10-19\n");
	return (1);
}
