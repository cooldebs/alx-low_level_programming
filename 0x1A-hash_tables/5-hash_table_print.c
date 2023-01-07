#include "hash_tables.h"

/**
 * hash_table_print - a function that prints a hash table
 * @ht: the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, x;
	hash_node_t *dummy;

	if (ht && ht->array)
	{
		putchar('{');
		x = 0;
		for (i = 0; i < ht->size; i++)
		{
			dummy = ht->array[i];
			while (dummy)
			{
				printf("'%s': '%s'", dummy->key, dummy->value);
				x = 1;
				if (dummy->next)
					printf(", ");
				dummy = dummy->next;
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
