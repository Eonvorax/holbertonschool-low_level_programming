#include <stdio.h>
/**
 * main - prints a str without printf or puts
 *
 * Return: 1
 */
int main(void)
{
	char quote;

	quote[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	fwrite(quote, sizeof(quote), 1, stderr);
	return (1);
}
