#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts new node in dlistint_t list at index
 * @h: pointer to head node of list
 * @idx: index where the node should be inserted
 * @n: int value of node to insert
 *
 * Return: address of inserted node, or NULL on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *tmp;
	unsigned int count = 0;

	new_node = malloc(sizeof(dlistint_t) * 1);
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	if (*h == NULL)
	{
		*h = new_node;
		return (new_node);
	}
	tmp = *h;
	while (count < idx)
	{
		tmp = tmp->next;
		if (tmp == NULL)
			return (NULL);
		count++;
	}

	new_node->prev = tmp->prev;
	new_node->next = tmp;
	tmp->prev = new_node;
	if (new_node->prev != NULL)
		new_node->prev->next = new_node;
	else
		*h = new_node;
	return (new_node);
}
