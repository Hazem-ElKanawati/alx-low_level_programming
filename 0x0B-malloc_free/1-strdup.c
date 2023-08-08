#include "main.h"
#include "stdlib.h"

/**
 * _strdup - duplicates a string
 * @str: string to be duplicated
 * Return: Pointer to the string (sucess) NULL(Error)
 */

char *_strdup(char *str)
{
	char *p;
	int s = 0;
	int i;

	if (str == NULL)
		return (NULL);
	while (str[s] != '\0')
	{
		s++;
	}
	p = malloc(sizeof(char) * (s + 1));
	if (p == NULL)
		return (NULL);
	for (i = 0; i <= s; i++)
	{
		p[i] = str[i];
	}
	return (p);
}
