#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: table to retrieve from
 * @key: key to retrieve value for
 * Return: value or NULL if no value found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *temp;
	unsigned long int i;

	i = key_index((unsigned char *)key, ht->size);
	temp = ht->array[i];
	while(temp)
	{
		if (!strcmp(key, temp->key))
			return (ht->array[i]->value);
		temp = temp->next;
		i++;
	}
	return (NULL);
}
