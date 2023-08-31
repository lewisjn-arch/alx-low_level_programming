#include "main.h"

/**
 * _pow_recursion - This function returns the value of x
 *
 * @x: interger input
 * @y: interger input
 *
 * Return: value of x
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return x * _pow_recursion(x,(y-1));
	}
}
