#include "main.h"

/**
 * puts2 - prints characters in a string
 *
 * @str: string to be printed
 *
 * Return: print
 */

void puts2(char *str)
{
	int length = 0;
	int m = 0;
	char *k = str;
	int n;

	while (*k != '\0')
	{
		k++;
		length++;
	}
	m = length - 1;
	for (n = 0; n <= m; n++)
	{
		if (n % 2 == 0)
		{
			_putchar(str[n]);
		}
		else
		{
			_putchar(str[n]);
		}
	}
	_putchar('\n');
}
