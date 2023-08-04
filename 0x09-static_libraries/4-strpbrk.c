#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - locate the first match of characters from 2 arrays
 * @s: the 1st array
 * @accept: the 2nd array
 * Return: NULL if nothing matches or a pointer to the first matching char
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0 ; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
	}
	return (NULL);
}
