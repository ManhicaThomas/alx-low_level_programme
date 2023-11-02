#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - This causes normal process termination with a status value of 98
 *
 * @b: the memory is allocated
 *
 * Return: a pointer is allocated to the memory
 */
void *malloc_checked(unsigned int b)
{
	char *output;

	output = malloc(b);
	if (output == NULL)
		exit(98);
	else
		return (output);
}
