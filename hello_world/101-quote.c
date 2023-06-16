#include <stdio.h>
#include <string.h>
/**
 * main - prints a str without printf or puts
 *
 * Return: 1
 */
int main(void)
{
	q1_len = strlen("and that piece of art is useful\" ");
	q2_len = strlen("- Dora Korpar, 2015-10-19\n");
	char quote_1[q1_len] = "and that piece of art is useful\" ";
	char quote_2[q2_len] = "- Dora Korpar, 2015-10-19\n";

	fwrite(quote_1, sizeof(quote_1), 1, stderr);
	fwrite(quote_2, sizeof(quote_2), 1, stderr);
	return (1);
}
