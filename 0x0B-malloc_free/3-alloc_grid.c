#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocates memory for a 2 dim array
 * @width: width of the array
 * @height: height of the array
 * Return: Pointer to the array (Success) NULL (Error)
 */

int **alloc_grid(int width, int height)
{
	int **array;
	int i, j;

	if (height <= 0 || width <= 0)
		return (NULL);
	array = (int **)malloc(sizeof(int *) * height);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < height ; i++)
	{
		array[i] = (int *)malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			free(arr);
			for (j = 0; j <= i; j++)
				free(arr[j]);
			return (NULL);
		}
		for (j = 0; j < width ; j++)
			array[i][j] = 0;
	}
	return (array);

}
