#include "dog.h"
/**
 * print_dog - prints a struct dog
 * @d: the new haw haw
 *
 * Return: void
 */
void print_dog(struct dog *d)
{

	if (d != NULL)
	{
		/*
		*if (d->name)
		*	printf("Name: %s\n", d->name);
		*else
		*	printf("Name: (nil)\n");

		*printf("Age: %f\n", d->age);

		*if (d->owner)
		*	printf("Owner: %s\n", d->owner);
		*else
		*	printf("Owner: (nil)\n");
		*/
		(d->name) ? printf("Name: %s\n", d->name) : printf("Name: (nil)\n");
		printf("Age: %f\n", d->age);
		(d->owner) ? printf("Owner: %s\n", d->owner) : printf("Owner: (nil)\n");
	}
}
