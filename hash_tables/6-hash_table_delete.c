#include "hash_tables.h"

/**
 * hash_table_delete - deletes and frees a hash table
 * @ht: pointer to hash table to delete
 *
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *current = NULL;
	hash_node_t *next = NULL;

	if (ht != NULL)
	{
		for (; i < ht->size; i++)
		{
			current = ht->array[i];
			while (current != NULL)
			{
				free(current->value);
				free(current->key);
				next = current->next;
				free(current);
				current = next;
			}
		}
		free(ht->array);
		free(ht);
	}
}
