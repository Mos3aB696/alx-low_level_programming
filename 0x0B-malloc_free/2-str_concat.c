#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: result
 */
char *str_concat(char *s1, char *s2)
{
	char *result;
	unsigned int i, j, n;

	if (s1 == NULL || s2 == NULL)
		return (NULL);

	n = strlen(s1) + strlen(s2) + 1;
	result = malloc(sizeof(char) * n);
	if (result == NULL)
		return (NULL);

	for (i = 0; i < strlen(s1); i++)
	{
		result[i] = s1[i];
	}
	for (j = 0; j < strlen(s2); j++)
	{
		result[i + j] = s2[j];
	}
	result[n - 1] = '\0';

	return (result);
}
