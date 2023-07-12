#include "main.h"
/**
 * _calloc - allocates memory for an array, initialized at 0
 * @nmemb : unsigned int number of elements in array
 * @size : unsigned int size of each element
 * Return: pointer to array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned char *mem;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	mem = malloc(size * nmemb);
	if (mem == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (nmemb * size); i++)
	{
		mem[i] = 0;
	}
	return (mem);
}
