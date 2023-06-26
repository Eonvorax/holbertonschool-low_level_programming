#include "main.h"
/**
 * puts_half - prints a string in reverse
 * @s : pointer to string
 * Return: nothing
 */
void puts_half(char *s)
{
	int beg, end;

	end = 0;
	beg = 0;
	while ((s[end] != '\0'))
	{
		end++;
	}
	while (beg <= ((end - 1) / 2))
	{
		beg++;
	}
	while ((s[beg] != '\0'))
	{
		_putchar(s[beg]);
		beg++;
	}
	_putchar('\n');
}
