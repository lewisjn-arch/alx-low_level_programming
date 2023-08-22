#include "main.h"

/**
 * print_rev - prints numbers in reverse
 *
 * @s: string
 */

void print_rev(char *s)
{
	int reverse = 0;
	int counter;

	while (*s != '\0')
	{
		reverse++;
		s++;
	}
	s--;
	for (counter = reverse; counter > 0; counter--)
	{
		_putchar(*s);
		s--;
	}
	_putchar ('\n');
}
