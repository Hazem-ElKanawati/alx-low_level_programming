#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - searches for an integer in an array
 * @array: array to search inside
 * @size: size of the array
 * @cmp: pointer to a function that compares integers
 * Return: The index of the matching number (Success) -1 (ERROR)
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int flag;

	if (size <= 0)
		return (-1);
	if (array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		flag = cmp(array[i]);
		if (flag != 0)
			return (i);
	}
	return (-1);
}
