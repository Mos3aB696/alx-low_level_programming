#include "search_algos.h"

/**
 * jump_search - function performs a jump search algorithm to
 * find a value in a given array.
 *
 * @array: The array parameter is a pointer to the first element of the array.
 * @size:The size of the array, i.e., the number of elements in the array.
 * @value: The value you are searching for in the array.
 *
 * Return: The function `jump_search` returns the index of the
 * `value` in the `array` if it is found,
 * otherwise it returns -1.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i = 0, j = 0, jump = 0;

	if (array == NULL || size == 0)
		return (-1);

	jump = sqrt(size);
	for (i = 0; i < size; i += jump)
	{
		if (array[i] >= value)
		{
			printf("Value found between indexes [%lu] and [%lu]\n", i - jump, i);
			for (j = i - jump; j <= i && j < size; j++)
			{
				printf("Value checked array[%lu] = [%d]\n", j, array[j]);
				if (array[j] == value)
					return (j);
			}
			break;
		}
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
	}
	printf("Value found between indexes [%lu] and [%lu]\n", i - jump, i);
	printf("Value checked array[%lu] = [%d]\n", i - jump, array[i - jump]);
	return (-1);
}
