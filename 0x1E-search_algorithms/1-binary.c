#include "search_algos.h"

/**
 * binary_search - function performs a binary search
 * on a sorted array to find the index of a given
 * value, returning -1 if the value is not found.
 *
 * @array: A pointer to the array of integers that will be searched.
 * @size: The size parameter represents the number of elements in the array.
 * @value: The value parameter is the element that we are
 * searching for in the array.
 *
 * Return: The binary_search function returns the index of
 * the value in the array if it is found, or -1
 * if it is not found.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, mid, i;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		mid = (left + right) >> 1;
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i != right)
				printf(", ");
		}
		printf("\n");

		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}
