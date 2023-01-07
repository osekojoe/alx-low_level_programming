#include "hash_tables.h"

/**
* key_index - gives index of a key
* @key: key
* @size: size of hash table array
*
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int idx;

	idx = hash_djb2(key);

	return (idx % size);
}
