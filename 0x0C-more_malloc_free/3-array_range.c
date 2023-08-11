#include "main.h"

/**
 * *array_range - function that creates an array of integers
 * @min: min number
 * @max: max number
 *
 * Return: ptr
*/

int *array_range(int min, int max)
{
	int *ptr;
	int i;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * (max - min + 1));

	if (ptr == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
	{
		ptr[i] = min;
		min++;
	}
	return (ptr);
}
