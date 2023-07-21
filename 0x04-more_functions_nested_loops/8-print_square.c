#include "main.h"
/**
 * print_square - prints a square, followed by a new line
 * @size: Number of square
 * Return: 0
 */
void print_square(int size)
{
	int i;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
