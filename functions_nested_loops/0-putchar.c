#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * main - prints "_putchar" and a newline
 * Return: 0
 */
int main(void)
{
	char str[12] = "_putchar";
	int i, n;

	n = strlen(str);
	for (i = 0; i < n; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
	return (0);
}
