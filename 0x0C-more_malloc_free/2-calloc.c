#include "main.h"

/**
 * *_calloc - allocates memory for an array, using malloc
 * @nmemb: Number of element in an array
 * @size: size of element
 *
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;
	unsigned int total = nmemb * size;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(total);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < total)
	{
		ptr[i] = 0;
		i++;
	}

	return (ptr);
}
