#include "lists.h"

/**
 * sum_dlistint - returnsthe sum of all the data (int n) in a dlistint_t list
 * @head: pointer to head node of list
 *
 * Return: int sum of all n in list, 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;
	int sum = 0;

	tmp = head;
	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
