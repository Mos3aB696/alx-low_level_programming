#include "main.h"
/**
 * check - function to check the prime number
 * @num: the number to check
 * @i: iterator
 *
 * Return: (1)
*/
int check(int num, int i)
{
	if (num % i == 0 || num < 2)
		return (0);
	if ((num - 1) == i)
		return (1);
	if (num > i)
		return (check(num, i + 1));
	return (1);
}
/**
 * is_prime_number - function that returns 1 if the input integer
 * is a prime number, otherwise return 0
 * @n: the number
 *
 * Return: check function.
 */

int is_prime_number(int n)
{
	return (check(n, 2));
}
