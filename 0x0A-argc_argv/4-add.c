#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - program that prints the number
 * of arguments passed into it
 * @argc: the number
 * @argv: elements of array
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, j, result = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		result += atoi(argv[i]);
	}

	printf("%d\n", result);
	return (0);
}
