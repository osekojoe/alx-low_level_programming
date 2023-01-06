#include "hash_tables.h"

/**
* hash_table_create - creates a hash table
* @size: size of array
* Return: pointer to the newly created hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashTable = NULL;

	hashTable = malloc(sizeof(hash_table_t));
	if (hashTable == NULL)
		return (NULL);

	hashTable->size = size;
	hashTable->array = malloc(sizeof(hash_table_t *) * size);
	if (hashTable->array == NULL)
	{
		free(hashTable);
		return (NULL);
	}
	return (hashTable);
}
