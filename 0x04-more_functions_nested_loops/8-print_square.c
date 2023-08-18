#include "main.h"
#include <stdio.h>

/**
 * print_square - this function prints a square
 *
 * @size: this is the size of the square
 *
 * Return: 0 if test case is a success
 */

void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		j = 0;
		while (j < size)
		{
			if (size <= 0)
				_putcher('\n');
			else
				_putchar(#);
			j++;
		}
		_putchar('\n');
	}
}
