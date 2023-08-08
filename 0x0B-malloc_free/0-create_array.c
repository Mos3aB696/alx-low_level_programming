#include "main.h"
/**
 * *create_array - function that creates an array of chars
 * @size: the size of an array
 * @c: the charcter of an array
 * Return: arr
*/
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	if (size != 0)
	{
		arr = malloc(sizeof(char) * size);
		if (arr != NULL)
		{
			for (i = 0; i < size; i++)
			{
				arr[i] = c;
			}
		}
		else
			return (NULL);
	}
	return (arr);
}
