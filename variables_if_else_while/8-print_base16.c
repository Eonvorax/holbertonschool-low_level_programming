#include <stdio.h>

/**
 * main - prints all base 16 numbers in lowercase
 * Return: 0
 */
int main(void)
{
	int code;

	for (code = 48; code <= 57; code++)
	{
		putchar(code);
	}
	for (code = 97; code <= 102; code++)
	{
		putchar(code);
	}
	putchar('\n');
	return (0);
}
