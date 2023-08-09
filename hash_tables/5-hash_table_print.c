#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table (same order as in the array)
 * @ht: pointer to hash table
 *
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current = NULL;

	if (ht != NULL)
	{
		printf("{");
		i = 0;
		while (i < ht->size)
		{
			current = ht->array[i];
			while (current != NULL)
			{
				printf("'%s': '%s'", current->key, current->value);
				printf(", ");
				current = current->next;
			}
			i++;
		}
		printf("}\n");
	}
}
