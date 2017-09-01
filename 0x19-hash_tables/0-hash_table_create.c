#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of table
 * Return: hash_table_t or NULL if fails
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;

	table = malloc(sizeof(hash_table_t));
	if (!table)
	   return (NULL);
	table->array = calloc(size, sizeof(hash_node_t));
	if (!table->array)
	   return (NULL);
	table->size = size;
	return (table);
}
