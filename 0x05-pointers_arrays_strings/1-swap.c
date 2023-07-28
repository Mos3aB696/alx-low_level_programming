#include "main.h"
/**
 * swap_int - function that swaps the values of two integers.
 * @a: first argument
 * @b: second argument
 *
 * Retrun: void
*/

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *b;
	*b = *a;
	*a = tmp;
}
