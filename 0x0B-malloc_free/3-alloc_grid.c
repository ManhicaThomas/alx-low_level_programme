#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - this returns a pointer to a 2 dimensional array of integers.
 * @width: the width of array = 6;
 * @height: the height of array = 4
 * Return: a pointer to a 2 dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int **array, x, y;
	int zen = width * height;

	if (zen <= 0)
		return (NULL);

	array = (int **)malloc(sizeof(int *) * height);
	if (array == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		array[x] = (int *)malloc(sizeof(int) * width);
		if (array[x] == NULL)
		{
			for (x--; x >= 0; x--)
				free(array[x]);
			free(array);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
		for (y = 0; y < width; y++)
			array[x][y] = 0;

	return (array);
}
