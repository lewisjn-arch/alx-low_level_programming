#include "main.h"
#include <stdio.h>

/**
 * _isdigit - This function checks for numerical characters
 *
 * @c: This is the value to be checked
 *
 * Return: 1 if character is numerical and 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
