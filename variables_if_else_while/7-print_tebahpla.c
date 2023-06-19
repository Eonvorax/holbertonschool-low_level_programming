#include <stdio.h>

/**
 * main - prints the alphabet with putchar, in reverse
 * Return: 0
 */
int main(void)
{
	int code;

	for (code = 122; code >= 97 ; code--)
	{
		putchar(code);
	}
	putchar('\n');
	return (0);
}
