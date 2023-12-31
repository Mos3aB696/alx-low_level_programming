#include "main.h"

/**
 * *string_nconcat - concatenates two strings.
 * @s1: stringOne
 * @s2: stringTwo
 * @n: numbers of lenght to concat
 *
 * Return: ptr
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	/* get length (s1, s2) */
	unsigned int lenOne = strlen(s1), lenTwo = strlen(s2);
	/* for loop */
	unsigned int i, j;
	char *ptr;
	/*check if equal NULL*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/*check if n >= lenTwo*/
	if (lenTwo <= n)
	{
		n = lenTwo;
		ptr = malloc(sizeof(char) * (lenOne + n + 1));
	}
	else
		ptr = malloc(sizeof(char) * (lenOne + n + 1));
	/*check if ptr == NULL*/
	if (ptr == NULL)
		return (NULL);
	/*first loop to store s1 values in ptr*/
	for (i = 0; i < lenOne; i++)
		ptr[i] = s1[i];
	/*second loop to store s2 values in ptr*/
	for (j = 0; j < n; j++)
		ptr[i++] = s2[j];
	/*add null in the end*/
	ptr[i++] = '\0';
	return (ptr);
}
