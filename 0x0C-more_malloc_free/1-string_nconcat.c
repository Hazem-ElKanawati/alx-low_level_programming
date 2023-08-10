#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: 1st string
 * @s2: 2nd string
 * @n: the first n bytes from the 2nd string to be copied
 * Return: Pointer to the New allocated string (Success) NULL (Error)
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j, size1 = 0;
	char *p;

	while (s1[size1] != 0)
		size1++;
	p = malloc(sizeof(char) * (size1 + n + 1));
	if (p == NULL)
		return (1);
	for (i = 0; i < size1; i++)
	{
		p[i] = s1[i];
	}
	for (j = 0; j <= n; j++)
	{
		p[i] = s2[j];
		i++;
	}
	p[i] = '\0';
	return (p);
}
