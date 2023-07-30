#include "main.h"

/**
 * reverse_array - reverses given array
 * @a: the array to be reversed
 * @n: size of the array
 */

void reverse_array(int *a, int n)
{
	int i, j = n - 1, tmp = 0;

	for (i = 0 ; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
		j--;
	}
}
