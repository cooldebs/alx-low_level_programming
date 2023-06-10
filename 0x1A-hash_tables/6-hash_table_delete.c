#include "hash_tables.h"

/**
 * hash_table_delete - a function that deletes a hash table.
 * @ht: the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp, *tmp;
	unsigned long int i;

	if (ht && ht->array)
	{
		for (i = 0; i < ht->size; i++)
		{
			temp = ht->array[i];
			while (temp)
			{
				tmp = temp->next;
				free(temp->key);
				free(temp->value);
				free(temp);
				temp = tmp;
			}
		}
		free(ht->array);
		free(ht);
	}
}
