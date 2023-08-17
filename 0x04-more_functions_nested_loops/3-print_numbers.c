#include "main.h"
#include <stdio.h>

/**
 * print_numbers - This function prints numbers 0 through 9
 *
 * Return: Always 0
 */

void print_numbers(void)
{
	int i;

	i = 0;
	while (i <= 9)
	{
		_putchar (i);
		i++;
	}
	_putchar ('\n');
}
