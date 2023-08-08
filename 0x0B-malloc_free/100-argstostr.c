#include "main.h"
#include <stdlib.h>

/**
 * argstostr - malloc an array for arguments
 * @ac: arg count
 * @av: arg vector
 * Return: pointer to array(Success) NULL(Error)
 */

char *argstostr(int ac, char **av)
{
	if (ac == 0 || av == NULL)
		return (NULL);

	int totalLength = 0;
	int index = 0;
	char *result;

	for (int i = 0; i < ac; i++)
	{
		for (int j = 0; av[i][j] != '\0'; j++)
		{
			totalLength++;
		}
		totalLength++;
	}

	result = (char *)malloc(totalLength + 1);

	if (result == NULL)
		return (NULL);


	for (int i = 0; i < ac; i++)
	{
		for (int j = 0; av[i][j] != '\0'; j++)
		{
			result[index] = av[i][j];
			index++;
		}
		result[index] = '\n';
		index++;
	}
	result[index] = '\0';

	return (result);
}
