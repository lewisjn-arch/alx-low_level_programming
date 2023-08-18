#include "main.h"

/**
 * print_numbers - This function prints numbers 0 through 9
 *
 * Return: Always 0 to mean test case passes
 *
 */

void print_numbers(void)
{
	int c;

	for (c = 48; c < 58; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
