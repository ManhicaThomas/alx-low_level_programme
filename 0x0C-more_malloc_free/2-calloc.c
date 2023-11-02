#include "main.h"

/**
 * _calloc - this allocates memory for an array of @nmemb elements of
 * @size bytes each and it returns a pointer to the allocated memory.
 * @nmemb: this allocates memory for array
 * @size: this allocates element of size bytes
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *y;
	unsigned int z;

	if (nmemb == 0 || size == 0)
		return (NULL);
	y = malloc(nmemb * size);
	if (y == NULL)
		return (NULL);
	for (z = 0; z < (nmemb * size); z++)
		y[z] = 0;
	return (y);
}
