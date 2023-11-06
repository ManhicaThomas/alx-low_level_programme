#include "dog.h"
#include <stdlib.h>

int _strlen(char *str);
char *_strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strlen - finds the length of a string.
 * @str: string to be measured.
 * Return: length of a string.
 */

int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}

/**
 * _strcopy - copies a string pointed to by src, this include the
 * termination of null byte to a buffer pointed by dest.
 * @dest: buffer stores the string copy.
 * @src: source string.
 * Return: pointer to dest.
 */

char *_strcopy(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index]; index++)
		dest[index] = src[index];

	dest[index] = '\0';

	return (dest);
}

/**
 * new_dog - this creates a new dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 * Return: new struct dog.
 */

dog_t *new_dog(char *name, float age, char owner)
{
	dog_t *dog_loves_men;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	dog_love_men = malloc(sizeof(dog_t));
	if (dog_loves_men == NULL)
		return (NULL);

	dog_loves_men->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (dog_loves_men->name == NULL)
	{
		free(dog_loves_men);
		return (NULL);
	}

	dog_loves_men->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (dog_loves_men->owner == NULL)
	{
		free(dog_loves_men->name);
		free(dog_loves_men);
		return (NULL);
	}

	dog_loves_men->name = _strcopy(dog_loves_men->name, name);
	dog_loves_men->age = age;
	dog_loves_men->owner = _strcopy(dog_loves_men->owner, owner);

	return (dog_loves_men);
}
