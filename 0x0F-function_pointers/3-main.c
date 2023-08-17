#include "3-calc.h"

/**
 * main - the main function
 * @argc: 000
 * @argv: 0000
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int (*operators)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	operators = get_op_func(argv[2]);

	if (!operators)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", operators(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
