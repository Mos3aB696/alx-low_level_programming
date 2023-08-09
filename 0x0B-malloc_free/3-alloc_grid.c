#include "main.h"

/**
 * **alloc_grid - function that returns a pointer to a 2
 * dimensional array of integers.
 * @width: the width of arr
 * @height: the height of arr
 *
 * Return: ptr
 */

int **alloc_grid(int width, int height)
{
	int **ptr, i, j;
	int len = width * height;

	if (len <= 0)
		return (NULL);

	ptr = malloc(sizeof(int) * height);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(sizeof(int) * width);
		if (ptr[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(ptr[i]);
			free(ptr);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			ptr[i][j] = 0;

	return (ptr);
}
