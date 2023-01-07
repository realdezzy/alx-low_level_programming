#include "hash_tables.h"

/**
  * hash_table_create - Creates a hash table
  * @size: size of the hash table array
  *
  * Return: Pointer to newly created hash table or NULL
  */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;

	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
		return (NULL);

	new_table->size = size;
	new_table->array = (hash_node_t **) malloc(sizeof(hash_node_t *) * size);
	if (new_table->array == NULL)
	{
		free(new_table);
		new_table = NULL;
		return (NULL);
	}

	return (new_table);
}

