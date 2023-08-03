#include "main.h"

/**
 * _strlen - calc length
 * @str: string
 *
 * Return: string length
*/

int _strlen(char *str)
{
	if (*str == '\0')
		return (0);
	else
		return (1 + _strlen(str + 1));
}
/**
 * compare - compare two character
 * @str: string
 * @r: right charcter
 * @l: left charcter
 *
 * Return: 0
*/
int compare(char *str, int r, int l)
{
	if (*(str + r) == *(str + l))
	{
		if (r == l || r == l + 1)
			return (1);

		return (0 + compare(str, r + 1, l - 1));
	}
	return (0);
}

/**
 * is_palindrome - function that returns 1 if a string is a
 *  palindrome and 0 if not.
 * @s: string
 *
 * Return: value of comapre
*/
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (compare(s, 0, _strlen(s) - 1));
}
