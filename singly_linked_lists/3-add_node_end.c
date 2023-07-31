#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list_t
 * @head: pointer to the head of list_t
 * @str: const pointer to start of string str
 *
 * Return: address of added element, or NULL on failure
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node, *new_node;

	if (head == NULL || str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t) * 1);
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = strlen(str);
	new_node->next = NULL;

	node = *head;
	if (node == NULL)
		*head = new_node;
	else
	{
		while (node->next != NULL)
			node = node->next;
		node->next = new_node;
	}
	return (new_node);
}
