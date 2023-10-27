#include <stdio.h>
#include <stdlib.h>

/**
 * main - This multiplies two numbers.
 * @argc: Argument count
 * @argv: Arguments
 * Return: 0
 */
int main(int argc, char **argv)
{
	int s, d;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	s = atoi(argv[1]);
	d = atoi(argv[2]);
	printf("%d\n", s * d);

	return (0);
}
