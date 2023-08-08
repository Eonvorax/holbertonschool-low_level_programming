#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the hash table to create
 *
 * Return: pointer to created hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t ht;

    if (size == 0)
    {
        return (NULL);
    }
    hash_table_t = malloc(sizeof(size) + sizeof(hash_node_t) * size)
}