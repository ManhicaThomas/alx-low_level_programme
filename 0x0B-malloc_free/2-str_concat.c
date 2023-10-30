#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - this concatenates two strings.
 * @s1: the first string
 * @s2: the second string
 * Return: this is a pointer to a newly allocated space in memory which
 * contains the contents of s1, followed by the contents of s2,
 * and null terminated. will lead to NULL failure
 */
char *str_concat(char *s1, char *s2)
{
	int x, y, zen1, zen2, zen;
	char *result;

	zen1 = zen2 = 0;

	if (s1 != NULL)
	{
		x = 0;
		while (s1[x++] != '\0')
			zen1++;
	}

	if (s2 != NULL)
	{
		x = 0;
		while (s2[x++] != '\0')
			zen2++;
	}

	zen = zen1 + zen2;
	result = (char *)malloc(sizeof(char) * (zen + 1));
	if (result == NULL)
		return (NULL);

	for (x = 0; x < zen1; x++)
		result[x] = s1[x];
	for (y = 0; y < zen2; y++, x++)
		result[x] = s2[y];
	result[zen] = '\0';

	return (result);
}
