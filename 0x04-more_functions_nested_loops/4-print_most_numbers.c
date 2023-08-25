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

	c = 48;
	while (c <= 57)
	{
		if (c != 50 && c != 52)
			_putchar(c);
		c++;
	}
	_putchar('\n');
}
