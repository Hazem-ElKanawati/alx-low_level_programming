#include "main.h"

/**
 * add_dnodeint_end - adds element to the end of the list
 * @head: head of the list
 * @n: element
 * Return: ptr to the new elemnt (Success) NULL (Failed)
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ptr, *tail = *head;

	if (tail == NULL)
		return (NULL);
	while (tail->next != NULL)
		tail = tail->next;
	ptr = malloc(sizeof(dlistint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->prev = tail;
	ptr->n = n;
	ptr->next = NULL;
	return (ptr);
}
