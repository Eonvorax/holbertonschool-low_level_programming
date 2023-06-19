#include <stdio.h>

/**
 * main - prints all single digit numbers with commas and spaces
 * Return: 0
 */
int main(void)
{
	int code;

	for (code = 48; code <= 57 ; code++)
	{
		putchar(code);
		if (code != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
