#include "search_algos.h"

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, mid = 0;

	if (array == NULL)
		return (-1);
	while (left <= right)
	{
		printf("Searching in array: ");
		for (mid = left; mid < right; mid++)
			printf("%d, ", array[mid]);
		printf("%d\n", array[mid]);
		mid = (left + right) / 2;
		if (array[mid] < value)
			left = mid + 1;
		else if (array[mid] > value)
			right = mid - 1;
		else
			return (mid);
	}
	return (-1);
}

int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1, i = 0, j = 0;

	if (array == NULL || size == 0)
		return (-1);
	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}
	i = bound / 2;
	j = (bound < size - 1) ? bound : size - 1;
	printf("Value found between indexes [%lu] and [%lu]\n", i, j);
	return (binary_search(&array[i], j - i + 1, value) + i);
}
