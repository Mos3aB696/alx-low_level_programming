#include "dog.h"
/**
 * new_dog - creates a new dog
 * @name: name of haw haw
 * @age: age of haw haw
 * @owner: name of owner of haw haw
 *
 * Return: ptr
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
		return (NULL);

	ptr->name = malloc(strlen(name) + 1);
	if (ptr->name != NULL)
	{
		strcpy(ptr->name, name);
	}

	ptr->age = age;

	ptr->owner = malloc(strlen(owner) + 1);
	if (ptr->owner != NULL)
	{
		strcpy(ptr->owner, owner);
	}

	return (ptr);
}
