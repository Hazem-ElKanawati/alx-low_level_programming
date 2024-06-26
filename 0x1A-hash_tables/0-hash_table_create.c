#include "hash_tables.h"
/**
* hash_table_create - creates a hash table
* @size: size of the table
* Return: Pointer to the hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t x;
	unsigned long int i = 0;
	hash_table_t *y;

	x.array = malloc(sizeof(hash_node_t *) * size);
	if (!x.array)
		return (NULL);
	x.size = size;
	for (i = 0; i < size; i++)
		x.array[i] = NULL;
	y = &x;
	return (y);
}
