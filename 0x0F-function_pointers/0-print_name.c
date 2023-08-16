#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: the name of user
 * @f: the pointer function
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;
	f(name);
}