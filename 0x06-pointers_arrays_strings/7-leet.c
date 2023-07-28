#include "main.h"

/**
 * *leet - function that encodes a string into 1337.
 * @str: String
 * Return: ptr
 */

char *leet(char *str)
{
	char *ptr = str;
	char letters[] = {'a', 'e', 'o', 't', 'l'};
	char num[] = {4, 3, 0, 7, 1};
	int i = 0;

	while (*str)
	{
		for (i = 0; i < 5; i++)
		{
			if (*str == letters[i] || *str == letters[i] - 32)
			{
				*str = num[i] + '0';
			}
		}
		str++;
	}
	return (ptr);
}
