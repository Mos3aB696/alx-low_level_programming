#include "main.h"
/**
 * _strstr - function that locates a substring
 * @haystack: string to search through
 * @needle: string to search for
 *
 * Return: null
 */

char *_strstr(char *haystack, char *needle)
{
	char *ptrOne = haystack, *ptrTwo = needle;
	char *ptrOneAdv = haystack;
	while (*++ptrOneAdv)
		;
	while (*ptrOne)
	{
		char *ptrOneBegin = ptrOne;
		ptrTwo = needle;
		while (*ptrOne && *ptrTwo && *ptrOne == *ptrTwo)
		{
			ptrOne++;
			ptrTwo++;
		}
		if (!*ptrTwo)
			return ptrOneBegin;
		ptrOne = ptrOneBegin + 1;
	}
	return NULL;
}
