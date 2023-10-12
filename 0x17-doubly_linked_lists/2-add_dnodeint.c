#include "lists.h"

/**
 * add_dnodeint - adds a node to the head of the list
 * @head: head of the list
 * @n: element
 * Return: ptr to the new node (Success) NULL (Failed)
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *ptr = malloc(sizeof(dlistint_t));

	while ((*head)->prev != NULL)
		(*head) = (*head)->prev;
	if (ptr == NULL)
		return (NULL);
	if (*head == NULL)
		return (NULL);
	(*head)->prev = ptr;
	ptr->next = (*head);
	ptr->n = n;
	ptr->prev = NULL;
	return (ptr);
}
