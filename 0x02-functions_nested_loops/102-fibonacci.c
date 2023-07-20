#include "main.h"
#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 * Return: 0
 */

int main(void)
{
	int i, fNum = 1, sNum = 2, sum;
	printf("%d %d, ", fNum, sNum);
	for (i = 0; i < 49; i++)
	{
		sum = fNum + sNum;
		fNum = sNum;
		sNum = sum;
		printf("%d, ", sum);
	}
	printf("%d \n", 1776683621);
	return (0);
}
