#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 *
 * @s: the string input to be passed
 *
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	int len;

	len = 0;
	if (*s == '\0')
	{
		return (len);
	}
	else
	{	
		return (len + 1) + _strlen_recursion(s + 1);
	}
}
