#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory and free it
 * @b: size
 * Return: Pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
