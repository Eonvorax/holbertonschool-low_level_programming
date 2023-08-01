#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a dlist_int list
 * @h: a const list_t pointer to the head of a list (first element)
 *
 * Return: the size_t number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count;
	const dlistint_t *node;

	node = h;
	count = 0;
	while (node != NULL)
	{
		node = node->next;
		count++;
	}
	return (count);
}
