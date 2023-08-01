#include "lists.h"

/**
 * add_dnodeint - Adds a node at the start of a dlistint_t list
 * @head: pointer to the head of a list dlistint_t
 * @n: int value to store in the new node
 *
 * Return: address of added element, or NULL on failure
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t) * 1);
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	if (*head != NULL)
		(*head)->prev = new_node;
	*head = new_node;
	return (*head);
}
