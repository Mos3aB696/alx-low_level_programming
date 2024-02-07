#include "search_algos.h"

/**
 * linear_search - function searches for a given value in an
 * array and returns the index of the value
 * if found, or -1 if not found.
 *
 * @array: A pointer to the array of integers that we want to search through.
 * @size: The size parameter represents the number of elements in the array.
 * @value: The value parameter is the integer value that we are
 * searching for in the array.
 *
 * Return: The function `linear_search` returns the index of the `value`
 * in the `array` if it is found,
 * or -1 if the `value` is not present in the `array`.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
