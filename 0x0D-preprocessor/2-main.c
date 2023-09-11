#include "main.h"
#include <stdlib.h>

/**
 * print_file - This program prints the file name
 *
 * Return: this returns 0 if test case is a success
 */

int print_file(void)
{
	char *filename = __FILE__;
	while (*filename)
	{
		_putchar(filename);
		filename++;
	}
	_putchar('\n');
	return (0);
}
