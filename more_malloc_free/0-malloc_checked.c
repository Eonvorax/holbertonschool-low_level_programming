#include "main.h"
/**
 * malloc_checked - allocates memory and exits with status
 * value of 98 in case of failure
 * @b : unsigned int size (in bytes) of memory to allocate
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *mem = malloc(b);

	if (mem == NULL)
	{
		exit(98);
	}
	return (mem);
}
