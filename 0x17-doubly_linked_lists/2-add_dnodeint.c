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

	if (ptr == NULL)
	{
		return (NULL);
	}

	ptr->n = n;
	ptr->prev = NULL;

	if (*head == NULL)
	{
		ptr->next = NULL;
	}
	else
	{
		ptr->next = *head;
		(*head)->prev = ptr;
	}

	*head = ptr;

	return (ptr);
}

