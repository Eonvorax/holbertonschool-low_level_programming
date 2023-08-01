#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t list
 * @head: pointer to head node in list
 * @index: unsigned int index of node to search in the list
 *
 * Return: index of found node, NULL if node not found
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int count = 0;

	tmp = head;
	while (tmp != NULL && count <= index)
	{
		if (count == index)
			return (tmp);
		tmp = tmp->next;
		count++;
	}
	return (NULL);
}
