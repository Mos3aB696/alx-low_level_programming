#include "main.h"
/**
 * times_table - function that prints the 9 times table, starting with 0
 * Return: 0
 */
void times_table(void)
{
	int i, j, n;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		for (j = 1; j <= 9; j++)
		{
			n = i * j;
			_putchar(',');
			_putchar(' ');
			if (n <= 9)
				_putchar(' ');
			else
				_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
		}
		_putchar('\n');
	}
}
