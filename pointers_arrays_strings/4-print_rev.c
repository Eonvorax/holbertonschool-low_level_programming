#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s : pointer to string
 * Return: nothing
 */
void print_rev(char *s)
{
	int len;

	len = 0;
	while ((*s != '\0'))
	{
		s++;
		len++;
	}
	while (len > 0)
	{
		s--;
		_putchar(*s);
		len--;
	}
	_putchar('\n');
}
