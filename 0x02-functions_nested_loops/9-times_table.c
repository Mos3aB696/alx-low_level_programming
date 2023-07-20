#include "main.h"
/**
 * times_table - function that prints the 9 times table, starting with 0
 * Return: 0
 */
void times_table(void)
{
	int i, j, n;

	for (i = 0; i <= 12; i++)
	{
		_putchar('0');
		for (j = 1; j <= 12; j++)
		{
			n = i * j;
			_putchar(',');
			_putchar(' ');
			if (n <= 9)
			{
				_putchar(' ');
				_putchar(' ');
			}
			else if (n > 9 && n <= 99)
			{
				_putchar(' ');
				_putchar((n / 10) + '0');
			}
			else
			{
				_putchar((n / 100) + '0');
				_putchar(((n / 10) % 10) + '0');
			}
				_putchar((n % 10) + '0');
		}
		_putchar('\n');
	}
}
