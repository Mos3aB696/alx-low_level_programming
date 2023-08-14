#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: pointer to new haw haw
 * @name: name of haw haw
 * @age: age of haw haw
 * @owner: name of owner of haw haw
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
