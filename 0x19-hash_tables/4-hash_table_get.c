#include "hash_table.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: table to retrieve from
 * @key: key to retrieve value for
 * Return: value or NULL if no value found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t temp;
	unsigned long int i;

	i = key_index;
	temp = array[i]
	while(temp)
	{
		if (strcmp(key, ht->temp->key))
			return (ht->array[i]);
		temp = temp->next;
	}
	return (NULL);
}
