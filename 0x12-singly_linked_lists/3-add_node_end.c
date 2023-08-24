#include "lists.h"

/**
 * add_node_end - adds node to the end
 * @head: pointer to the head of the list
 * @str: string to be replaced with
 * Return: the address of the new elemet (Success) NULL (Error)
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;
	new = malloc(sizeof(list_t));
	if (new)
		return (NULL);
	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (temp)
		temp = temp->next;
	temp->next = new;
	return (new);
}
