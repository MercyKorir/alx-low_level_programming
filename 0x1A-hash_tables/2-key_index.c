#include "hash_tables.h"

/**
 * key_index - function returns the index of a key
 * @key: the key
 * @size: size of array of the hash table
 * Return: index of key is to is to be stored in array of
 * hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index_key;

	index_key = hash_djb2(key) % size;
	return (index_key);
}
