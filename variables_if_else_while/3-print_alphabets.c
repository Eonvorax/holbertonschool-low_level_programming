#include <stdio.h>

/**
 * main - prints the alphabet in lower and upper case with putchar
 * Return: 0
 */
int main(void)
{
	int code;

	for (code = 97; code <= 122; code++)
	{
		putchar(code);
	}
	for (code = 65; code <= 90; code++)
	{
		putchar(code);
	}
	putchar('\n');
	return (0);
}
