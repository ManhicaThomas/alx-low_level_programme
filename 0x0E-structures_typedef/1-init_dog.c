#include "dog.h"

/**
 * init_dog - this initializes a structure of type dog
 * @d: pointer to structure
 * @name: pointers to the name of the dog
 * @age: the age of the dog
 * @owner: this pointers to the owner of the dog
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
