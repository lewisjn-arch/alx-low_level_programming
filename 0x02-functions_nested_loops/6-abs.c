#include "main.h"

/**
 * _abs - this program computes the absolute value of an interger
 *
 * @c: The number to be checked
 *
 * Return: 0 if the test case passes
 */

int _abs(int c)
{
	if (c < 0)
	{
		int absolute;

		absolute = c * -1;
		return (absolute);
	}
	return (c);
}
