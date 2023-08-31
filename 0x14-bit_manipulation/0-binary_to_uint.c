#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary
 *
 * Return: result
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	char *endptr;
	unsigned int result;

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	if (b == NULL)
		return (0);

	result = strtol(b, &endptr, 2);

	return (result);
}
