#include "lists.h"

/**
 * free_dlistint - frees a list
 * @head: head of the list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head == NULL)
		return;
	while (head->prev != NULL)
		head = head->prev;
	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
