#include "main.h"

/**
 * *_strdup - function that returns a pointer to a
 * newly allocated space in memory
 * @str: the string to input
 *
 * Return: s
 */

char *_strdup(char *str)
{
	char *s = NULL;
	unsigned int i;

	if (str == NULL)
		return (NULL);

	s = malloc(sizeof(char) * strlen(str) + 1);
	if (s != NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			s[i] = str[i];
		}
	}
	s[i] = '\0';

	return (s);
}
