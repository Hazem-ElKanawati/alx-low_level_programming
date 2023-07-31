#include "main.h"

/**
 * _strchr - find a char inside an array
 * @s: array to search inside
 * @c: char to search for
 * Return: the first occurance of the char
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			*ptr = s[i];

			return (ptr);
		}

	}
	return (NULL);
}
