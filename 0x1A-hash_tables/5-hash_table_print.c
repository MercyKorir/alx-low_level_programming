#include "hash_tables.h"

/**
 * hash_table_print - it prints a hash table
 * @ht: the hash table to be printed
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned char flag = 0;
	hash_node_t *curr_node;
	unsigned long int i;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (flag == 1)
				printf(", ");
			curr_node = ht->array[i];
			while (curr_node != NULL)
			{
				printf("'%s': '%s'", curr_node->key, curr_node->value);
				curr_node = curr_node->next;
				if (curr_node != NULL)
					printf(", ");
			}
			flag = 1;
		}
	}
	printf("}\n");
}
