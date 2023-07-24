#include "main.h"

/**
 * swap_int - swaps 2 integers
 * @a : first integer
 * @b : second integer
 */

void swap_int(int *a, int *b)
{
	int i, j;

	i = *a;
	j = *b;
	*a = j;
	*b = i;
}
