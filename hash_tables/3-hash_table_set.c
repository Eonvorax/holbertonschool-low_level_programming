#include "hash_tables.h"

/**
 * add_node - adds new node at the start of a hash table's linked list
 * @head: pointer to the head of the list
 * @key: string value
 * @value: string value
 *
 * Return: address of added element
 */
hash_node_t *add_node(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *new_node;

	new_node = malloc(sizeof(hash_node_t) * 1);
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (NULL);
	}
	new_node->next = *head;
	*head = new_node;
	return (*head);
}

/**
 * hash_table_set - adds an element to the hash table, given a key and a value
 * @ht: hash table to add the element to
 * @key: key string for the element
 * @value: value of the element
 *
 * Return: 1 on success, 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t **head = NULL;
	hash_node_t *new_node = NULL;
	unsigned long int index;

	if (ht == NULL || key == NULL || value == NULL)
	{
		return (0);
	}
	index = key_index((unsigned char *)key, ht->size);
	head = &(ht->array[index]);
	new_node = add_node(head, key, value);
	if (new_node == NULL)
	{
		return (0);
	}
	return (1);
}
