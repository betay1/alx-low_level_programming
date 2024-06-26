#include <math.h>
#include "search_algos.h"

/**
 * jump_list - search a single linked list using the jump search algorithm
 * @list: pointer to first node in linked list
 * @size: size of the list
 * @value: value to be searched
 * Return: pointer to first node containing value or NULL if not present
 * or list is empty
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *hold = list;
	int x, jump;

	if (list == NULL || size == 0)
		return (NULL);

	jump = sqrt(size);

	while (hold->next != NULL)
	{
		list = hold;

		for (x = 0; x < jump; x++)
		{
			hold = hold->next;
			if (hold->next == NULL)
				break;
		}

		printf("Value checked at index [%lu] = [%d]\n", hold->index, hold->n);

		if (hold->n >= value)
			break;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", list->index,
	       hold->index);

	while (list != NULL && list != hold->next)
	{
		printf("Value checked at index [%lu] = [%d]\n", list->index, list->n);
		if (list->n == value)
			return (list);
		list = list->next;
	}

	return (NULL);
}
