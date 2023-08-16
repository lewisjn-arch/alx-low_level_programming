#include "main.h"

/**
 * print_alphabet - A program that prints the alphabet in lowercase
 *
 * Return: Always returns void to mean test case passes
 */

void print_alphabet(void)
{
	char lower;

	lower = 'a';
	while (lower <= 'z')
	{
		_putchar (lower);
		lower++;
	}
	_putchar ('\n');
}
