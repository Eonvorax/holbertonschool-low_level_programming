#include "lists.h"

/**
 * list_len - returns the number of elements in a list_t
 * @h: a const list_t pointer to the head of a list (first element)
 *
 * Return: the size_t number of nodes in the list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *node = h;

	while (node != NULL)
	{
		node = node->next;
		count++;
	}
	return (count);
}
