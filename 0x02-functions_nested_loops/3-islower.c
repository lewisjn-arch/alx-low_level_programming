#include "main.h"

/**
 * _islower - this function checks for lowercase characters
 *
 * @c: is the value to be checked
 *
 * Return: Always 1 if c is lowercase and 0 if otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
		return (0);
}
