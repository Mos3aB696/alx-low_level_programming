#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: is the string to be printed between numbers
 * @n: Numbers
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list values;
	char *val;

	va_start(values, n);
	for (i = 0; i < n; i++)
	{
		val = va_arg(values, char*);
		if (val == NULL)
			printf("(nil)");
		else
		printf("%s", val);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");

	va_end(values);
}
