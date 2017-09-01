#include "hash_table.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table
 * @key: key to add in table
 * @value: value accosiated with the key
 * Return: 1 if success 0 if fails
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t new;
	unsigned int long i;

	i = key_index(key, ht->size);

	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);
	new->next = NULL;
	new->key = key;
	new->value = value;
	if (ht->array[i] == (0 || NULL))
		ht->array[i] = new;
	else
		ht->array[i]->next = new;
	return (1);
}
