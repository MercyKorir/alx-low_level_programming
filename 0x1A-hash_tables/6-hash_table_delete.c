#include "hash_tables.h"

/**
 * hash_table_delete - function deletes a hash table
 * @ht: hash table to be deleted
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_table_t *ptr = ht;
	hash_node_t *curr_node, *node_ptr;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			curr_node = ht->array[i];
			while (curr_node != NULL)
			{
				node_ptr = curr_node->next;
				free(curr_node->key);
				free(curr_node->value);
				free(curr_node);
				curr_node = node_ptr;
			}
		}
	}
	free(ptr->array);
	free(ptr);
}
