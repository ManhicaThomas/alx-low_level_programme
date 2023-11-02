#include "main.h"

/**
 * malloc_checked - This causes normal process termination with a status value of 98
 *
 * @b: the memory is allocated
 *
 * Return: a pointer is allocated to the memory
 */
void *malloc_checked(unsigned int b)
{
	void *x;

	x = malloc(b);
	if (x == NULL)
		exit(98);
	return (x);

}
