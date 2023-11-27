#include "main.h"

/**
 * get_endianness - function that checks the endianness.
 * Return: 0 for a big endian and 1 for a small endian.
 */

int get_endianness(void)
{
	unsigned int j = 1;
	char *l = (char *) &j;

	return (*l);
}
