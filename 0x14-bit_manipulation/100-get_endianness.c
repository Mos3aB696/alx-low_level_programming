#include "main.h"
/**
 * get_endianness - checks the endianness.
 *
 * Return: *c
 */
int get_endianness(void)
{
	int i;
	char *c;

	i = 1;
	c = (char *)&i;

	return (*c);
}
