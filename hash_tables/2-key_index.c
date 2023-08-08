#include "hash_tables.h"

/**
 * key_index - returns the index of the given key in the hash table
 * @key: key string
 * @size: size of the array of the hash table
 *
 * Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = 0;

	/*The returned index must be "fitted" to the size of the array*/
	index = hash_djb2(key) % size;
	return (index);
}
