#include <stdio.h>
/**
 * main - prints the sum of the even-valued terms
 * Return: 0
 */

int main(void)
{
	long numOne = 0, numTwo = 1, total;
	int result;

	while (1)
	{
		total = numOne + numTwo;
		if (total > 4000000)
			break;

		if (total % 2 == 0)
			result += total;

		numOne = numTwo;
		numTwo = total;
	}
	printf("%d\n", result);
	return (0);
}
