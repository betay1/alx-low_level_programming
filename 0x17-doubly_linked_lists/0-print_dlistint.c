#include "lists.h"

/**
 * print_dlistint - prints all dlistint_t list
 * @h: head
 * return: no. of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int count;

	oount = 0;

	if (h == NULL)
		return (count);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
