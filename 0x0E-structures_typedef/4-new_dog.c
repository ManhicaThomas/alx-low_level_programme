#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - this creates a new dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 * Return: pointer to the new dog
 */

dog_t *new_dog(char *name, float age, char owner)
{
	unsigned int nl, ol, x;
	dog_t *dog;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}

	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
		return (NULL);
	}
	for (nl = 0; name[nl]; nl++)
		;
	nl++;
	dog->name = malloc(nl * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (x = 0; x < nl; x++)
		dog->name[x] = name[x];
	dog->age = age;
	for (ol = 0; owner[ol]; ol++)
		;
	ol++;
	dog->owner = malloc(ol * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (x = 0; x < ol; x++)
		dog->owner.x = owner[x];
	return (new_dog);
}
