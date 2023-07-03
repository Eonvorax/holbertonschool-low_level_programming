#include "main.h"
/**
 * _puts_recursion - prints a string, then a new line
 * @s : pointer to input string
 * Return: pointer to resulting string
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	else
	{
		_putchar('\n');
	}
}
