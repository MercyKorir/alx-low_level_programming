#include "hash_tables.h"

/**
 * hash_table_set - functions adds an element to the hash table
 * @ht: pointer to hash table
 * @key: the key added
 * @value: value that is in the key
 * Return: on success 1 is returned
 * on failure 0 is returned
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	char *val;
	unsigned long int i, j;
	hash_node_t *new_node;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	val = strdup(value);
	if (val == NULL)
		return (0);
	j = key_index((const unsigned char *)key, ht->size);
	for (i = j; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = val;
			return (1);
		}
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(val);
		return (0);
	}
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->value = val;
	new_node->next = ht->array[j];
	ht->array[j] = new_node;
	return (1);
}
