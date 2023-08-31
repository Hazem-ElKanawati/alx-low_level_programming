#include "main.h"

/**
 * flip_bits - calculate different bits between to no.
 * @n: first int
 * @m: second int
 * Return: no. of bits to be flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m;
	unsigned int count = 0;

	while (diff > 0)
	{
		count += (diff & 1);
		diff >>= 1;
	}
	return (count);
}
