#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers.
 * @a:Array
 * @n: number of elements of the array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int j, tmp;

	n = n - 1;
	while (j < n)
	{
		tmp = *(a + j);
		*(a + j) = *(a + n);
		*(a + n) = tmp;
		j++;
		n--;
	}
}
