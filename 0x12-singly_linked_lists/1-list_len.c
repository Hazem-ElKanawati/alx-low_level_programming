#include "lists.h"

/**
 * list_len - calculate no. of elements in a list
 * @h: pointer to the list
 * Return: no. of elements in the list
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
