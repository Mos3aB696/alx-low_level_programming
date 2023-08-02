#include "main.h"

/**
 * _print_rev_recursion - function that prints a string in reverse.
 * @s: String
 *
 * Return: void
*/

void _print_rev_recursion(char *s)
{
	if (s[0] != '\0')
	{
		s++;
		_print_rev_recursion(s);
		_putchar(s[0]);
	}
}
