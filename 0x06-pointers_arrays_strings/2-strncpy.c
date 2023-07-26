#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: array the string will be pasted
 * @src: array that will be copied
 * @n: maximum bytes to be copied
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (src[i] != '\0')
		i++;
	for (j = 0; j <= i; j++)
	{
		if (j < n)
			dest[j] = dest[i];
	}
	return (dest);

}
