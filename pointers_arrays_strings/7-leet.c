#include "main.h"
/**
 * leet - check the code
 * @s: a char pointer
 *
 * Return: Always 0.
 */

char *leet(char *s)
{
	char base [] = {'a', 'e', 'o', 't', 'l'};
	char code [] = {'4', '3', '0', '7', '1'};
	int i;
	int len = 0;

	while (s[len] != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if ((s[len] == base[i]) || (s[len] == (base[i] - 32)))
				s[len] = code[i];
		}
		len++;
	}
	return (s);
}
