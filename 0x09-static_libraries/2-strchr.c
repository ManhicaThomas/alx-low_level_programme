#include "main.h"
/**
 * _strchr - The program entry point
 * @s: The input value
 * @c: The input value
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int y = 0;

	for (; s[y] >= '\0'; y++)
	{
		if (s[y] == c)
			return (&s[y]);
	}
	return (0);
}
