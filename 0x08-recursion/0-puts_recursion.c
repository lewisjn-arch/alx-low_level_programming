#include "main.h"

/**
 * _puts_recursion - This recursive function prints a string
 *
 * @s: This is the string to be printed
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	int i;

	i = 0;
	if (s[i] == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(s[i]);
		_puts_recursion(s);
		i++;
	}
	return (s);
}
