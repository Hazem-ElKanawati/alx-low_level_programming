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
	if (c == 0)
		return (NULL);

	char *a;

	a = malloc(sizeof(char) * size);
	a[0] = c;

	return (a);
}
