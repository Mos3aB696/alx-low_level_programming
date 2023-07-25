#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: string input
 *
 * Return: void
*/


void rev_string(char *s)
{
	int i, j, tmp, len;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	j = 0;
	len = i;
	i--;
	while (j < len / 2)
	{
		tmp = s[j];
		s[j] = s[i];
		s[i] = tmp;
		i--;
		j++;
	}
}
