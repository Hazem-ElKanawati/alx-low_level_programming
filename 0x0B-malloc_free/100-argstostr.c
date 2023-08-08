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


	int totalLength = 0, i, j;
	int index = 0;
	char *result;

	if (ac == 0 || av == NULL)
		return (NULL);



	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			totalLength++;
		}
		totalLength++;
	}

	result = (char *)malloc(totalLength + 1);

	if (result == NULL)
		return (NULL);


	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
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
