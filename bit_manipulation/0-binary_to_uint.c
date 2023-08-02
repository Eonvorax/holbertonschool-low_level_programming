#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: const pointer to string representing the number's binary digits
 *
 * Return: converted number, or 0 on failure
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	unsigned int i = 0;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		n <<= 1;
		n += (b[i] - '0');
		i++;
	}
	return (n);
}
