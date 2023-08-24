#include "lists.h"
#include <string.h>

/**
 * add_node - adds a new node to the start of a list
 * @head: pointer to the list
 * @str: string to be duplicated
 * Return: pointer to the added node (Success) NULL (Error)
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = len;
	new->next = *head;
	(*head) = new;

	return (*head);
}
