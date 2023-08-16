#include "main.h"

/**
 * print_alphabet_x10: This program prints the alphabet 10 times
 *
 * Always returns void to mean the test case passes
 */

void print_alphabet_x10(void)
{
	int repeat;
	char lower;

	repeat = 0;
	while (repeat < 10)
	{
		lower = 'a';
		while (lower <= 'z')
		{
			_putchar (lower);
			lower++;
		}
	repeat++;
	_putchar ('\n');
	}
}
