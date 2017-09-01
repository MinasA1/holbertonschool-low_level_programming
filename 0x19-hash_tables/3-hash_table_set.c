#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table
 * @key: key to add in table
 * @value: value accosiated with the key
 * Return: 1 if success 0 if fails
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	unsigned int long i;

	i = key_index((unsigned char *)key, ht->size);

	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);
	new->next = NULL;
	new->key = (char *)key;
	new->value = (char *)value;
	if (!ht->array[i])
		ht->array[i] = new;
	else
	  {
	    new->next = ht->array[i];
	    ht->array[i] = new;
	  }
	return (1);
}
