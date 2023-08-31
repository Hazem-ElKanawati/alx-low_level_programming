#include "main.h"

/**
 * clear_bit - sets a bit to 0
 * @n: integer
 * @index: the bit to be set
 * Return: 1 (Success) -1 (Error)
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int p;

	if (index > 64)
		return (-1);
	p = ~(1 << index);
	*n &= p;
	return (1);
}
