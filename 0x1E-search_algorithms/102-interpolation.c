#include "search_algos.h"

/**
 * interpolation_search - function performs interpolation search on
 * a sorted array to find the
 * position of a given value.
 *
 * @array: A pointer to the array of integers that will be searched.
 * @size:The size parameter represents the number of elements in the array.
 * @value: The value parameter is the value that you are searching
 * for in the array.
 *
 * Return: The function `interpolation_search` returns the
 * index of the `value` in the `array` if it is
 * found, or -1 if it is not found.
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, pos = 0;

	if (array == NULL || size == 0)
		return (-1);
	while (low <= high)
	{
		pos = low + (((double)(high - low) / (array[high] - array[low]))
			* (value - array[low]));
		if (pos < low || pos > high)
		{
			printf("Value checked array[%lu] is out of range\n", pos);
			break;
		}
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}
	return (-1);
}
