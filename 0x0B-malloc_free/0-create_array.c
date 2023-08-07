#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array
 * @size: size of array
 * @c: first char of the array
 * Return: pointer to the array (sucess) NULL (Error)
 */

char *create_array(unsigned int size, char c)
{
	char *a;

	if (c == 0)
		return (NULL);
	a = malloc(sizeof(char) * size);
	if (a == NULL)
		return (NULL);
	a[0] = c;

	return (a);
}
