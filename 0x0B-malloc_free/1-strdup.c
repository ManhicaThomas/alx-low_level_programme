#include "main.h"
#include <stdlib.h>

/**
 * _strdup - This returns a pointer to a newly allocated space in memory,
 * and that contains a copy of the string given as a parameter.
 * @str: source string
 * Return: This returns a pointer to the duplicated string.
 * and it returns NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	char *copy;
	int y, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	copy = (char *)malloc((sizeof(char) * len) + 1);
	if (copy == NULL)
		return (NULL);

	for (y = 0; y < len; y++)
		copy[y] = str[y];
	copy[len] = '\0';

	return (copy);
}
