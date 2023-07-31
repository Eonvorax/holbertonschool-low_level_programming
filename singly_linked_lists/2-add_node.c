#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list_t
 * @head: pointer to the head of list_t
 * @str: const pointer to start of string str
 *
 * Return: address of added element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (head == NULL || str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t) * 1);
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	new_node->len = strlen(new_node->str);
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
