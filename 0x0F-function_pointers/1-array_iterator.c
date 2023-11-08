#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - function that executes a function
 * provided as a parameter on each element of an array.
 * @array: array.
 * @size: size of the array.
 * @action: pointer to the function to be executed.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int y;

	if (array == NULL || sction == NULL)
		return;
	for (y = 0; y < size; y++)
		action(array[y]);
}
