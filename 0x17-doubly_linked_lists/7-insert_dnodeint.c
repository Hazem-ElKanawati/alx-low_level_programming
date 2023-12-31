#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a node at an index
 * @idx: index
 * @h: head of the list
 * @n: element to be added
 * Return: Ptr to the new node (Sucess) NULL (Fail)
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0, i;
	dlistint_t *p = *h, *po, *prev, *next, *new, *x;

	if (p == NULL)
		return (NULL);
	while (p->prev != NULL)
		p = p->prev;
	po = p;
	for (count = 0; p != NULL; count++)
		p = p->next;
	if (idx > count)
		return (NULL);
	else if (idx == 0)
	{
		x = add_dnodeint(h, n);
		return (x);
	}
	else if (idx == count)
	{
		x = add_dnodeint_end(h, n);
		return (x);
	}
	for (i = 0; i <= idx; i++)
	{
		if (i == idx - 1)
			prev = po;
		else if (i == idx)
			next = po;
		po = po->next;
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = prev;
	new->next = next;
	next->prev = new;
	prev->next = new;
	return (new);
}
