#include "main.h"
#include <limits.h>
/**
 * _atoi - returns length of string from pointer
 * @s : pointer to string
 * Return: int
 */
int _atoi(char *s)
{
	int i, n, sign;

	n = 0;
	sign = 0;
	i = 0;
	while (!((s[i] >= '0') && (s[i] <= '9')) && (s[i] != '\0'))
	{
		if (s[i] == '-')
		{
			sign++;
		}
		i++;
	}
	while (((s[i] >= '0') && (s[i] <= '9')))
	{
		n *= 10;
		if ((n + (s[i] - '0') * -1) <= INT_MIN)
			return (INT_MIN);
		n += (s[i] - '0');
		i++;
	}
	if ((sign % 2 != 0))
		n *= -1;
	return (n);
}
