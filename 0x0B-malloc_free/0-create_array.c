#include "main.h"
#include <stdlib.h>

/**
 * create_array - This creates an array of chars,
 * and it initializes it with a specific char.
 * @size: Size of the array
 * @c: initial value
 * Return: The pointer will return to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int x;

	if (size == 0)
		return (NULL);

	array = (char *)malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);

	for (x = 0; x < size; x++)
		array[x] = c;

	return (array);
}
