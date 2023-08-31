#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary
 *
 * Return: result
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int result = 0;

	if (!b)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
			/**
		* result = 0000 0010
							//0000 0001
							//0000 0011
							//0000 0110
							//0000 1100
							//0001 1000
							//0011 0000
							//0000 0001
							//0011 0001
							//0110 0010
							//0 + 2 + 0 + 0 + 0 + 32 + 64
			*/
		result <<= 1;
		if (b[i] == '1')
			result += 1;
	}

	return (result);
}
