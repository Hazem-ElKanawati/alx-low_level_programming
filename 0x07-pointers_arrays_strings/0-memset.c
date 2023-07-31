#include "main.h"

/**
 * _memset - fills an array
 * @s: the array to be filled
 * @b: the byte to fill the array
 * @n: number of bytes to be filled
 * Return: the array
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		s[i] = b;
	}
	return (s);
}
