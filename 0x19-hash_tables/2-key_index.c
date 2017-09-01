#include "hash_tables.h"

/**
 * key_index - generates the index for the key
 * @key: the key to generate index for
 * @size: table size
 * Return: index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned int long hash;

	hash = hash_djb2(key);
	return (hash % size);
}
