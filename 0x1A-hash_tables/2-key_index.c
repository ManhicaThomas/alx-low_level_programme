#include "hash_table.h"

/**
 * key_index - gets index for key given
 * @key: the key (str) to hash
 * @size: size of hash table
 * Return: the index 'key' using djb2
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
