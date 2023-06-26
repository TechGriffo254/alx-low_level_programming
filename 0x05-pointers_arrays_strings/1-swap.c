#include "main.h"

/**
 * swap_int - swap the value of two integers.
 *
 * @a: first integer
 * @b: second integer
 * Return: void does not return anything
 */

void swap_int(int *a, int *b)
{
	int k;

	k = 0;
	k = *a;
	*a = *b;
	*b = k;
}
