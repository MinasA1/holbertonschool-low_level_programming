#include "hash_table.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table to delete
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t temp;

	if (ht)
	{
		while(i < ht->size)
		{
			if (ht->array[i])
			{
				temp = ht->array[i];
				while(temp)
				{
					temp = temp->next;
					free(array[i]);
					array[i] = temp;
				}
			}
			i++;
		}
		free(ht->array);
		free(ht);
	}
}
