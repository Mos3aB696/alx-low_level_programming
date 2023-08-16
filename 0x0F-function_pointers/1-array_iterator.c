#include "function_pointers.h"

/**
 * array_iterator -executes a function given as a
 * parameter on each element of an array.
 *
 * @array: the given array
 * @size: size of array
 * @action: the pointer function
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
