#include "main.h"

/**
 * _puts_recursion
 * @s: String
 *
 * Return:
 */

void _puts_recursion(char *s)
{

	if (*s)
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	else
	{
		_putchar('\n');
	}
}
