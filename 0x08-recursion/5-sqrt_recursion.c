#include "main.h"
/**
 * check - function check the root number
 * @x: root number
 * @y: power
 *
 * Return: check function
*/

int check(int x, int y)
{
	if (y * y == x)
		return (y);
	else if (y * y <= x)
		return (check(x, y + 1));
	else
		return (-1);
}

/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 * @n: number
 *
 * Return: check function
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (check(n, 2));
}
