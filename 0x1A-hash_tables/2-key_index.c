#include "hash_tables.h"

/**
  * key_index - gives the index of a key
  * @key: item key
  * @size: hash table array size
  *
  * Return: index(int)
  */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;

	hash_value = hash_djb2(key);

	return (hash_value % size);
}
