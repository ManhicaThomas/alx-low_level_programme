#include "hash_table.h"

/**
 * key_index - this gets the index at which a key/value
 * pair should be stored in arr of a hash table.
 * @key: kry to get the index of
 * @size: size of the array of the hash table
 * Return: index of the key
 * Description: uses the djb2 algorithm
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
