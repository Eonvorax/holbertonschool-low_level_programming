#include "main.h"
/**
 * _puts - prints a string, then a newline, to stdout
 * @str : pointer to string
 * Return: nothing
 */
void _puts(char *str)
{
	while ((*str != '\0'))
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
