#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: the given hash table
 *
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp, *pointer;

	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
	{
		pointer = ht->array[i];
		while (pointer)
		{
			tmp = pointer->next;
			free(pointer->key);
			free(pointer->value);
			free(pointer);
			pointer = tmp;
		}
	}
	free(ht->array);
	free(ht);
}
