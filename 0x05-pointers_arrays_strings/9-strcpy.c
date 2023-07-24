#include "main.h"

/**
 * _strcpy - copies a string to an array
 * @src: string to be copied
 * @dest: array
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	do {
		dest[i] = src[i];
		i++;
	} while (src[i] != '\0');
	if (src[i] == '\0')
	{
		dest[i] = src[i];
	}
	return (dest);
}
