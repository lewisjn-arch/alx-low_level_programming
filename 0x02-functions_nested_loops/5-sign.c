#include "main.h"

/**
 * print_sign - this function prints the sign of a number
 * @n: this is the value to be checked
 * Return: 1 if number is >0 and 0 if number is less than 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar (-);
		return (-1);
	}
	else
	{
		_putchar (n + '0');
		return (0);
	}
}
