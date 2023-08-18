#include "main.h"

/**
 * print_most_numbers - This function prints numbers except 2 and 4
 *
 * @c: This is the value to be checked
 *
 * Return: Always 0
 */

void print_most_numbers(void)
{
	int c;

	c = 0;
	while (c <= 9)
	{
		if (c != 2 && c != 4)
			_putchar(c);
		c++;
	}
	_putchar('\n');
}
