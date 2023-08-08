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
	char *s;
	unsigned int i;

	if (str == NULL)
		return (NULL);

	s = malloc(sizeof(char) * strlen(str));
	if (s != NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			s[i] = str[i];
		}
	}
	else
		return (NULL);
	s[i] = '\0';

	return (s);
}
