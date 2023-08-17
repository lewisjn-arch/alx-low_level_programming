#include "main.h"

/**
 * print_line - this function prints the distance between 2 points
 *
 * Return: Always 0
 */

void print_line(int n)
{
	int line;

	line = 0;
	while (line <= n)
	{
		if (n <= 0)
			_putchar('\n');
		else
		_putchar('_');
	}
	_putchar('\n');
}
