#include "lists.h"

/**
 * print_dlistint - prints all elements of a dlistint_t
 * @h: a const list_t pointer to the head of a list (first element)
 *
 * Return: the size_t number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count;
	const dlistint_t *node;

	if (h == NULL)
		return (0);
	node = h;
	count = 0;
	while (node != NULL)
	{
		printf("%d\n", node->n);
		node = node->next;
		count++;
	}
	return (count);
}
