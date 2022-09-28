#include "hash_tables.h"
#include "ctype.h"

/**
 * hash_djb2 - This function implements the djb2 algorithm
 * @str: string used to generate hash value
 * Return: hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		if (isupper(c))
		{
			c = c + 32;
		}
		hash = ((hash << 5) + hash) + c;
	}
	return (hash);
}
