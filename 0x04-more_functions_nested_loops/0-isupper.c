#include "main.h"
#include <stdio.h>

/**
 * _isupper - This function checks for uppercase characters
 *
 * @c: This is the value to be checked
 *
 * Return: Always 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
