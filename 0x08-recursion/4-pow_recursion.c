#include "main.h"

/**
 * _pow_recursion - function that returns the value of x raised to the
 * power of y.
 * @x: value
 * @y: power
 *
 * Return: pow_recursion
 */

int _pow_recursion(int x, int y)
{
	if (x == 1 || y == 0)
		return (1);
	if (y < 0)
		return (-1);
	if (x != 0)
		return (x * _pow_recursion(x, y - 1));
	else
		return (1);
}
