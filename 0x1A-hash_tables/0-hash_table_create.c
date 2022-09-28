#include "hash_tables.h"

/**
 * hash_table_create - this function creates a hash table
 * @size: size of array
 * Return: pointer to the newly created hash table is returned
 * on Success
 * on Failure the function returns a NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int n;
	hash_table_t *hash;

	hash = malloc(sizeof(hash_table_t));
	if (hash == NULL)
		return (NULL);
	hash->size = size;
	hash->array = malloc(sizeof(hash_node_t *) * size);
	if (hash->array == NULL)
		return (NULL);
	for (n = 0; n < size; n++)
		hash->array[n] = NULL;
	return (hash);
}
