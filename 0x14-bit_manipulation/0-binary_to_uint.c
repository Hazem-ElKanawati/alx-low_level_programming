#include "main.h"

/**
 * binary_to_uint - converts binary to unsignet int
 * @b: string of binary chars
 * Return: converted no. (Success) 0 (Fail)
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int p = 1, t = 0;
	int l = 0;

	if (!b)
		return (0);
	while (b[l] != '\0')
	{
		if (b[l] != '0' && b[l] != '1')
			return (0);
		l++;
	}
	for (l -= 1; l >= 0; l--, p *= 2)
	{
		if (b[l] == '1')
			t += p;
	}
	return (t);
}
