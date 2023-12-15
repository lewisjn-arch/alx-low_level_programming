#include "main.h"

/**
 * _strlen - this returns the length of a string
 *
 * @s: the string being counted
 *
 * Return: length of the string
 */

int _strlen(char *s)
{
	int distance = 0;

	while (*s != '\0')
	{
		distance++;
		s++;
	}
	return (distance);
}
