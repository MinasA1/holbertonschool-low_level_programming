#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table to delete
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *temp;

	if (ht)
	{
	  while(i < ht->size)
	    {
	      if (ht->array[i])
		{
		  temp = ht->array[i];
		  while(temp)
		    {
		      ht->array[i] = ht->array[i]->next;
		      free(temp);
		      temp = ht->array[i];
		    }
		}
	      i++;
	    }
	  free(ht->array);
	  free(ht);
	}
}
