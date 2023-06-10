#include "hash_tables.h"

/**
 * hash_table_print - a function that prints a hash table
 * @ht: the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, x;
	hash_node_t *temp;

	if (ht && ht->array)
	{
		putchar('{');
		x = 0;
		for (i = 0; i < ht->size; i++)
		{
			temp = ht->array[i];
			while (temp)
			{
				printf("'%s': '%s'", temp->key, temp->value);
				x = 1;
				if (temp->next)
					printf(", ");
				temp = temp->next;
			}
			if (x && ht->array[i + 1])
			{
				printf(", ");
				x = 0;
			}
		}
		printf("}\n");
	}
}
