#include "main.h"
#include <limits.h>
/**
 * cap_string - capitalizes words in string
 * @s : pointer to string
 * Return: pointer to string
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] >= 'a') && (s[i] <= 'z'))
		{
			if ((i == 0) || s[i - 1] == (' ') ||
			    s[i - 1] == ('\t') ||
			    s[i - 1] == ('\n') ||
			    s[i - 1] == (',') ||
			    s[i - 1] == (';') ||
			    s[i - 1] == ('.') ||
			    s[i - 1] == ('!') ||
			    s[i - 1] == ('?') ||
			    s[i - 1] == ('"') ||
			    s[i - 1] == ('(') ||
			    s[i - 1] == (')') ||
			    s[i - 1] == ('{') ||
			    s[i - 1] == ('}'))
			{
				s[i] = (s[i] - 32);
			}
		}
	}
	return (s);
}
