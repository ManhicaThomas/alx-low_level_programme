#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *array_range - this creates an array of integers
 * @min: the min range of values is stored
 * @max: max range of values stored and the number of elements
 *
 * Return: the pointer to the new array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int a, size;

	int (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (a = 0; min <= max; a++)
		ptr[a] = min++;

	return (ptr);
}
