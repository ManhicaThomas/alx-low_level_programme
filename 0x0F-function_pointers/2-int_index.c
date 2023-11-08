#include "function_pointers.h"

/**
 * int_index - function that searches for an integer.
 * @array: array of intergers.
 * @size: size of the array
 * @cmp: pointers to the function to be used for comparing values.
 *
 * Return: if no element or size matches <= 0 - -1.
 * Alternatively - index of the first element
 * which the cmp function does not return 0.
 */

int int_index(int *array, int size, int (cmp)(int))
{
	int index = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (index < size)
			{
				if (cmp(array[index]))
					return (index);
				index++;
			}
		}
	}

	return (-1);
}
