#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a list
 * @head: head of the list
 * @index: n
 * Return: the nth node (Success) NULL (Fail)
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);
	while (head->prev != NULL)
		head = head->prev;
	for (i = 0; i < index; i++)
	{
		if (head->next != NULL)
			head = head->next;
		else
			return (NULL);
	}
	return (head);
}
