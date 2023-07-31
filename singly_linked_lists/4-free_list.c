#include "lists.h"
/**
 * free_list - frees a list_t
 * @head: list_t pointer to the head of the list
 *
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *node = head;

	while (head != NULL)
	{
		head = node->next;
		free(node->str);
		free(node);
		node = head;
	}
}
