#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t list
 * @head: list_t pointer to the head of the list
 *
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;

	while (tmp != NULL)
	{
		head = tmp->next;
		free(tmp);
		tmp = head;
	}
}
