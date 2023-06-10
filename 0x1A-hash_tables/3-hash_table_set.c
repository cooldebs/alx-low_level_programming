#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table to add or update the key/value to
 * @key: the key
 * @value: the value associated with the key
 *
 * Return: 1 on success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx, x = 0;
	hash_node_t *new, *temp;

	if (strlen(key) == 0 || !key || !value || !ht)
		return (0);
	idx = hash_djb2((const unsigned char *) key) % ht->size;
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->key = strdup(key);
	new->value = strdup(value);
	if (new->value == NULL || new->key == NULL)
		return (0);
	new->next = NULL;
	if (ht->array[idx])
	{
		temp = ht->array[idx];
		while (temp)
		{
			if (strcmp(temp->key, key) == 0)
			{
				free(temp->value);
				temp->value = strdup(value);
				if (temp->value == NULL)
					return (0);
				x = 1;
				break;
			}
			temp = temp->next;
		}
		if (x == 0)
		{
			new->next = ht->array[idx];
			ht->array[idx] = new;
		}
	}
	else
		ht->array[idx] = new;

	return (1);
}
