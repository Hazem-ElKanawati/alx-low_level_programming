#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concetanets 2 strings
 * @s1: string 1
 * @s2: string 2
 * Return: Pointer to the new concetaneted string (Sucess) NULL (Error)
 */

char *str_concat(char *s1, char *s2)
{
	char *p;
	int size1 = 0, i, size2 = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[size1] != '\0')
		size1++;
	while (s2[size2] != '\0')
		size2++;
	p = malloc(sizeof(char) * (size1 + size2 + 1));
	if (p == NULL)
		return (NULL);

	for (i = 0; i < size1; i++)
	{
		p[i] = s1[i];
	}
	while (i <= (size1 + size2 + 1))
	{
		p[i] = s2[j];
		i++;
		j++;
	}
	return (p);

}
