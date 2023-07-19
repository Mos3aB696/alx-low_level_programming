#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - function that prints all natural numbers from n to 98
 * @n: This argument form user
 * Return: 0;
 */

void print_to_98(int n)
{
	int i;
	int target = 98;

	if (n > target)
	{
		for (i = n; i > target; i--)
		{
			printf("%d, ", i);
		}
	}
	else
	{
		for (i = n; i < target; i++)
		{
			printf("%d, ", i);
		}
	}
	printf("%d\n", 98);
}
