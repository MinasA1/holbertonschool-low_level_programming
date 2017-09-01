#include "hash_table.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned int long i = 0;
	hash_node_t temp;

	if (ht)
	{
		putchar('{');
		while(i < ht->size)
		{
			if (ht->array[i])
			{
				temp = ht->array[i];
				while(temp)
				{
					printf("'%s': '%s'", temp->key, temp->value);
					if(temp->next)
						printf(", ");
					temp = temp->next;
				}
				if(temp[i + 1])
					printf(", ");
			}
			i++;
		}
		printf("}\n");
	}
}
