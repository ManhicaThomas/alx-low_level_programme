#include "main.h"

/**
 * binary_to_uint - function converts a binary number to an unsigned int.
 * @b: pointer to a string containing a binary number.
 * Return: converted number.
 */

unsigned int binary_to_uint(const char *b)
{
	int y;
	unsigned int dec_val = 0;

	if (!b)
		return (0);

	for (y = 0; b[y]; y++)
	{
		if (b[y] < '0' || b[y] > '1')
			return (0);
		dec_val = 2 * dec_val + (b[y] - '0');
	}

	return (dec_val);
}
