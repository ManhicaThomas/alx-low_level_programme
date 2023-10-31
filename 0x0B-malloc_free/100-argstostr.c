#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - A function that concatenates all the arguments of your program.
 * @ac: argument count.
 * @av: argument vector.
 *
 * Return: void
 */

char *argstostr(int ac, char **av)
{
	int ch = 0, x = 0, y = 0, z = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (x < ac)
	{
		while (av[x][y])
		{
			ch++;
			y++;
		}

		y = 0;
		x++;
	}

	s = malloc((sizeof(char) * ch) + ac + 1);

	x = 0;
	while (av[x])
	{
		while (av[x][y])
		{
			s[z] = av[x][y];
			z++;
			y++;
		}

		s[x] = '\n';

		y = 0;
		z++;
		x++;
	}

	z++;
	s[z] = '\n';
	return (s);
}

