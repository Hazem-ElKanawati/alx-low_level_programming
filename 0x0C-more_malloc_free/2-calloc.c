#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory
 * @nmemb: number of elements
 * @size: size of each element
 * Return: Pointer to allocated memory (Success) NULL (Error)
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < size * nmemb; i++)
	{
		p[i] = '0';
	}
	return (p);
}
