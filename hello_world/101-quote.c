#include <stdio.h>
/**
 * main - prints a str without printf or puts
 *
 * Return: 1
 */
int main(void)
{
	char quote_1[50] = "and that piece of art is useful\" ";
	char quote_2[50] = "- Dora Korpar, 2015-10-19\n";

	fwrite(quote_1, sizeof(quote_1), 1, stderr);
	fwrite(quote_2, sizeof(quote_2), 1, stderr);
	return (1);
}
