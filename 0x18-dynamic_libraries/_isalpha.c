#include "main.h"

/**
 * _isalpha - This program checks for the alphabetic characters
 *
 * @c: this is the value to be checked
 *
 * Return: 1 if character is alphabetical and 0 if otherwise
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
		return (1);
	}
		return (0);
}
