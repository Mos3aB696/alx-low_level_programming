#include "main.h"
/**
 * print_times_table - function that prints the n times table, starting with 0
 * @n: this argument from user
 * Return: 0
 */
void print_times_table(int n)
{
	if (n > 0 && n < 15)
	{
		int i, j, total;

		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			for (j = 1; j <= n; j++)
			{
				total = i * j;
				_putchar(',');
				_putchar(' ');
				if (total <= 9)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else if (total > 9 && total <= 99)
				{
					_putchar(' ');
					_putchar((total / 10) + '0');
				}
				else
				{
					_putchar((total / 100) + '0');
					_putchar(((total / 10) % 10) + '0');
				}
				_putchar((total % 10) + '0');
			}
			_putchar('\n');
		}
	}
	else
	{
		return (0);
	}
}
