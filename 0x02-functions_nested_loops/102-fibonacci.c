#include "main.h"
#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 * Return: 0
 */

int main(void)
{
	long int fNum = 1, sNum = 2, sum;
	int i;

	printf("%lu, %lu, ", fNum, sNum);
	for (i = 3; i <= 50; i++)
	{
		sum = fNum + sNum;
		fNum = sNum;
		sNum = sum;
		if (i == 50)
		{
			printf("%lu \n", sum);
		}
		else
		{

			printf("%lu, ", sum);
		}
	}
	return (0);
}
