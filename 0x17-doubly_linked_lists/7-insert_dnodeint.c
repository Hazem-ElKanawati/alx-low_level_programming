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
	dlistint_t *p = *h;
	dlistint_t *po;
	dlistint_t *prev;
	dlistint_t *next;
	dlistint_t *new;

	if (p == NULL)
		return (NULL);
	while (p->prev != NULL)
		p = p->prev;
	po = p;
	while (p != NULL)
	{
		count++;
		p = p->next;
	}
	if (idx < 0 || idx > count)
		return (NULL);
	else if (idx == 0)
		add_dnodeint(h, n);
	else if (idx == count)
		add_dnodeint_end(h, n);
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
