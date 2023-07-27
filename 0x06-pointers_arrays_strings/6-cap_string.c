#include "main.h"
/**
 * cap_string - function that capitalizes all words of a string
 * @str: String
 * Return: ptr
 */
char *cap_string(char *str)
{
	char *ptr = str;
	int i;
	char a[] = " \t\n,.!?\"(){}";
	int C = 1;

	while (*str)
	{
		if (C && *str >= 'a' && *str <= 'z')
			*str -= 32;
		C = 0;
		for (i = 0; i < 12; i++)
		{
			if (*str == a[i])
				C = 1;
		}
		str++;
	}
	return (ptr);
}
