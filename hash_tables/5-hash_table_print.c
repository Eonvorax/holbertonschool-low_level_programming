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
	char first_element = 1;

	if (ht != NULL)
	{
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			current = ht->array[i];
			while (current != NULL)
			{
				if (first_element == 0)
				{
					printf(", ");
				}
				printf("'%s': '%s'", current->key, current->value);
				first_element = 0;
				current = current->next;
			}
		}
		printf("}\n");
	}
}
