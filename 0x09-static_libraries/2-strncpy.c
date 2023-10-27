#include "main.h"
/**
 * _strncpy - The program copies a string
 * @dest: The input value
 * @src: The input value
 * @n: The input value
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x = 0;

	while (x < n && src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}
	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}

	return (dest);
}
