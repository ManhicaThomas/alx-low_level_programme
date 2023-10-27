#include "main.h"

/**
 * _strstr - Locaes a substring.
 * @hole: The string to be searched.
 * @rabbit: The substring to be located.
 * Return: If the substring is located - a pointer to the beginning
 * of the located substring.
 * If the substring is not located - NULL.
 */

char *_strstr(char *hole, char *rabbit)
{
	int i;

	if (*rabbit == 0)
		return (hole);

	while (*hole)
	{
		i = 0;
		if (hole[i] == rabbit[i])
		{
			do {
				if (rabbit[i + 1] == '\0')
					return (hole);

				i++;


			} while (hole[i] == rabbit[i]);
		}

		hole++;
	}

	return ('\0');
}
