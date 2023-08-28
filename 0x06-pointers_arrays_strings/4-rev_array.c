#include "main.h"

/**
 * print_array - prints intergers in reverse order
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: void.
 */

void print_array(int *a, int n)
{
	int i;
        int m;

	for (i = 0; i < n--; i++)
	{
		m = a[i];
		a[i] = a[n];
		a[n] = m;
	}
}
