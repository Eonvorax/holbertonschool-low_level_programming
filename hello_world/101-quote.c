#include <stdio.h>
/**
 * main - prints a str without printf or puts
 *
 * Return: 1
 */
int main(void)
{
	#define B_SIZE 100
	char quote;

	quote[B_SIZE] = "and that piece of art is useful\" ";
	fwrite(quote, sizeof(quote), 1, stderr);
	quote[B_SIZE] = "- Dora Korpar, 2015-10-19\n";
	fwrite(quote, sizeof(quote), 1, stderr);
	return (0);
}
