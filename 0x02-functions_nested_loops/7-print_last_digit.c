#include "main.h"

/**
 * print_last_digit - This program prints the last digit of a number
 *
 * @c: The value being checked
 *
 * Return: 0 if the test case passes
 */

int print_last_digit(int c)
{
	int last;

	last = c % 10;
	_putchar (last);
}
