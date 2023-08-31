#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 *
 * @s: the string input to be passed
 *
 * Return: 0
 */

int _strlen_recursion(char *s)
{
	int len;

	len = 0;
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		len++;
		_strlen_recursion(s + 1);
	}
	return (len);
}
