#include "main.h"

/**
 * _strcat - appends an array to another array
 * @dest: array to be ammended
 * @src: other array
 * Return: the array
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0, k;

	while (src[i] != '\0')
		i++;
	while (dest[j] != '\0')
		j++;
	for (k = 0; k <= i + j ; k++)
	{
		dest[j] = src[k];
		j++;
	}
	return (dest);

}
