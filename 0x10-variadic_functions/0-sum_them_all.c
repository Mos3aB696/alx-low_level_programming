#include "variadic_functions.h"

/**
 * sum_them_all -s um of all its parameters.
 *@n: Number of arg
	*
	* Return: sum
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list values;
	unsigned int i, sum = 0;

	va_start(values, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(values, int);
	}
	va_end(values);
	return (sum);
}
