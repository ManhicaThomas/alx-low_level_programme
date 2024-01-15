#include "main.h"
/**
 * _strcat - The function that concatenates two strings
 * @dest: The entered value
 * @src: The entered value
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int t;
	int m;

	t = 0;
	while (dest[t] != '\0')
	{
		m++;
	}
	m = 0;
	while (src[m] != '\0')
	{
		dest[t] = src[m];
		t++;
		m++;
	}

	dest[t] = '\0';
	return (dest);
}
