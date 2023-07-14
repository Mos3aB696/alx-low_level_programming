#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print last digit of number
 * Description: using the main function
 * this funtion print the last digit
 * Return: 0
*/
int main(void)
{
	int n;
	int ld = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	if (ld > 5)
	{
		printf("Last digit of %d is %d and is greate than 5\n", n, ld);
	}
	else if (ld == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, ld);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ld);
	}
	return (0);
}
