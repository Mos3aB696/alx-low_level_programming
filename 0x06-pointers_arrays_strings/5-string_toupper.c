#include "main.h"

/**
 * *string_toupper - function that changes all lowercase letters
 * of a string to uppercase
 * @str: the user string
 *
 * Return: str
*/
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
	/**
	* char *ptr = str;
	* while (*str)
	* {
	* if (*str >= 'a' && *str <= 'z')
	* *str -= 32;
	* str++;
	* }
	* return (ptr);
	*/
}
