#include "main.h"

/**
 * *malloc_checked - function that allocates memory using malloc
 * @b: size of data to store in memory
 *
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	else
		return (ptr);
}
