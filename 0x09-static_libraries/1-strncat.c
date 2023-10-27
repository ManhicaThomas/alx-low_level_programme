#include "main.h"
/**
 * _strncat - The function concatenate two strings
 * using at most n bytes from src
 * @dest: Is the entered value
 * @src: Is the entered value
 * @n: Is the entered value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int y;
	int x;

	y = 0;
	while (dest[y] != '\0')
	{
		x++;
	}
	x = 0;
	while (x < n && src[x] != '\0')
	{
		dest[y] = src[x];
		y++;
		x++;
	}
	dest[y] = '\0';
	return (dest);
}

