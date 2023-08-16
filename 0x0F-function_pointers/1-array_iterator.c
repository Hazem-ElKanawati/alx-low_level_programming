#include "function_pointers.c"
#include <stdlib.h>

/**
 * array_iterator - acts a function on each element of an array
 * @array: The array
 * @size: The size of the array
 * @aciton: The function to be implemented
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if(array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
