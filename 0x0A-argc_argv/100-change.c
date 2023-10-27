#include <stdio.h>
#include <stdlib.h>

/**
 * main - This prints the main number of coins to make change
 * for an amount of cash
 * @argc: Argument count
 * @argv: Arguments
 * Return: 0
 */
int main(int argc, char **argv)
{
	int total, count;
	unsigned int x;
	char *p;
	int cents[] = {25, 10, 5, 2};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	total = strtol(argv[1], &p, 10);
	count = 0;

	if (!*p)
	{
		while (total > 1)
		{
			for (x = 0; x < sizeof(cents[x]); x++)
			{
				if (total >= cents[x])
				{
					count += total / cents[x];
					total = total % cents[x];
				}
			}
		}
		if (total == 1)
			count++;
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", count);
	return (0);
}
