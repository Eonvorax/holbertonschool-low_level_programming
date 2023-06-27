#include "main.h"
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
	while (!((s[i] >= '0') && (s[i] <= '9')))
	{
		if (s[i] == '-')
		{
			sign++;
		}
		i++;
	}
	if (s[i] != '\0')
		return (0);
/* TODO return (n) at the end ?*/
	while (((s[i] >= '0') && (s[i] <= '9')))
	{
		n *= 10;
		n += (s[i] - '0');
		i++;
	}
	if ((sign % 2 == 0))
		n *= -1;
	return (n);
}
