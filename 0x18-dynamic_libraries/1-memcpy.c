#include "main.h"
/**
 * _memcpy - This is a function that copies memory area
 * @dest: This is where memory is stored
 * @src: This is where memory is stored
 * @n: The number of bytes
 *
 * Return: copied memory with a byted change
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int m = 0;
	int t = n;

	for (; m < t; m++)
	{
		dest[m] = src[m];
		n--;
	}
	return (dest);
}
