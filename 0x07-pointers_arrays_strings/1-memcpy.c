#include "main.h"

/**
 * _memcpy - copies bytes from array to another array
 * @dest: place to be pasted
 * @src: array to be copied
 * @n: no. of bytes
 * Return: the final array
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
