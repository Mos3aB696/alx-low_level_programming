#include "3-calc.h"

/**
 * op_add - sum two integers
 * @a: first int
 * @b: second int
 *
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substraction two integers
 * @a: first int
 * @b: second int
 *
 * Return: sub of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication two integers
 * @a: first int
 * @b: second int
 *
 * Return: multi of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division two integers
 * @a: first int
 * @b: second int
 *
 * Return: div of a and b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - modulus two integers
 * @a: first int
 * @b: second int
 *
 * Return: modulus of a and b
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
