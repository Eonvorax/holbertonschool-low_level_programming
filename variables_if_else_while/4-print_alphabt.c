#include <stdio.h>

/**
 * main - prints the alphabet with putchar, except e and q
 * Return: 0
 */
int main(void)
{
	int code;

	for (code = 97; code <= 122; code++)
	{
		if (code != 101 && code != 113)
		{
			putchar(code);
		}
	}
	putchar('\n');
	return (0);
}
