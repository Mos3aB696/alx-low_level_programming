#include "main.h"

/**
 * *rot13 - function that encodes a string into 1337.
 * @str: String
 * Return: ptr
 */

char *rot13(char *str)
{
	char *ptr = str;
	char letters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i = 0;

	while (*str)
	{
		for (i = 0; i < 52; i++)
		{
			if (*str == letters[i])
			{
				*str = rot13[i];
				break;
			}
		}
		str++;
	}
	return (ptr);
}
