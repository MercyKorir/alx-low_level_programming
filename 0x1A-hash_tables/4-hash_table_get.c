#include "hash_tables.h"

/**
 * hash_table_get - retrieves value associated with a key
 * @ht: hash table to look into
 * @key: key being searched
 * Return: the value is returned
 * NULL is returned if no key is found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	hash_node_t *curr_node;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	i = key_index((const unsigned char *)key, ht->size);
	if (i >= ht->size)
		return (NULL);
	curr_node = ht->array[i];
	while (node && strcmp(node->key, key) != 0)
		curr_node = curr_node->next;
	return ((curr_node == NULL) ? NULL : curr_node->value);
}
