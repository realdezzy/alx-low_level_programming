#include "hash_tables.h"

/**
  * hash_table_set - Adds element to the hash table
  * @ht: pointer to hash table
  * @key: key for representing value
  * @value: value to be stores
  *
  * Return: 1 or 0 (success or failure)
  */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *item;
	hash_node_t *index_item;

	item = malloc(sizeof(hash_node_t));
	if (item == NULL)
		return (0);

	item->key = (char *) malloc(strlen(key) + 1);
	item->value = (char *) malloc(strlen(value) + 1);

	strcpy(item->key, key);
	strcpy(item->value, value);

	index = key_index((const unsigned char *) key, ht->size);
	index_item = ht->array[index];

	if (index_item == NULL)
	{
		index_item = item;
		item->next = NULL;
	}
	else
	{
		item->next = index_item;
		index_item = item;
	}
	return (1);
}
