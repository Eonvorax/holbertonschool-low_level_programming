#include "lists.h"

/**
 * print_list - prints all the elements of a list_t
 * @h: a const list_t pointer to the head of a list (first element)
 *
 * Return: the size_t number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count;
	const list_t *node;

	if (h == NULL)
	{
		return (0);
	}
	node = h;
	count = 0;
	while (node != NULL)
	{
		if (node->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", node->len, node->str);
		}
		node = node->next;
		count++;
	}
	return (count);
}
