#include "lists.h"

/**
 * dlistint_len - Returns No. of elements
 * @h: A node in the list
 * Return: No. of elements in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	if (h == NULL)
		return (0);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
