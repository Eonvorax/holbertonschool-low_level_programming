#include <stdio.h>

/**
 * main - prints the alphabet with putchar
 * Return: 0
 */
int main(void)
{
	int code;

	for (code = 97; code <= 122; code++)
	{
		putchar(code);
	}
	putchar('\n');
	return (0);
}
