#include "main.h"
#include <stdio.h>

/**
 * _strstr - searches for a substring in a string
 * @haystack: string
 * @needle: substring
 * Return: pointer to the first char of the substring or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j = 0;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			j = 0;
			while (haystack[i + j] == needle[j])
			{
				j++;
			}
			if (needle[j] == '\0')
				return (&haystack[i]);
		}

	}
	return (NULL);
}
