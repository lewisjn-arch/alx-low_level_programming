#include "main.h"

/**
 * swap_int - swaps to intergers
 *
 * @a: interger value
 * @b: interger value
 *
 * Return: a and b
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
