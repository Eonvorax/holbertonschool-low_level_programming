#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at given index in dlistint_t list
 * @head: pointer to head node of dlistint_t list
 * @index: index of node to delete
 *
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *tmp;

	if (*head == NULL)
	{
		return (-1);
	}
	tmp = *head;
	while (count < index && tmp->next != NULL)
	{
		tmp = tmp->next;
		count++;
	}
	if (count != index)
		return (-1);
	if (tmp->prev != NULL)
	{
		tmp->prev->next = tmp->next;
	}
	else
	{
		*head = tmp->next;
	}
	if (tmp->next != NULL)
	{
		tmp->next->prev = tmp->prev;
	}
	free(tmp);
	return (1);
}
