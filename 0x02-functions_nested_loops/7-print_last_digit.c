#include "main.h"
/**
 * print_last_digit - function that prints the last digit of a number
 * @ld: that will use for the argument of the function
 * Return: 0
*/

int print_last_digit(int ld)
{
	if (ld > 0 || ld == 0)
	{
		_putchar('0' + ld % 10);
		return (ld % 10);
	}
	else if (ld < 0)
	{
		ld *= -1;
		_putchar('0' + ld % 10);
		return (ld % 10);
	}
}
