#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: the string
 *
 * Return: i
*/

int _strlen(char *s)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		i++;
	}
	return (i);
}
