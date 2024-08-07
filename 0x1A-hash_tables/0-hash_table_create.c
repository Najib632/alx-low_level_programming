#include "hash_tables.h"

/**
 * hash_table_create - will create a hash table of a certain size
 * @size: size of the array of linked lists
 *
 * Return: hash_table (SUCCESS), NULL (FAIL)
 **/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;

	ht = calloc(1, sizeof(hash_table_t));
	if (ht == NULL)
	{
		return (NULL);
	}

	ht->size = size;
	ht->array = calloc(size, sizeof(hash_node_t *));
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}

	return (ht);
}
