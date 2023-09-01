#include "main.h"

int calculate_sqrt(int n, int i);
/**
 * calculate_sqrt - This function calculates the square root of a number
 *
 * @n: integer input
 * @i: integer input
 *
 * Return: square root of a number
 */

int calculate_sqrt(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	else if (i * i == n)
	{
		return (i);
	}
	else
	{
		return (calculate_sqrt(n, i + 1));
	}
}

/**
 * _sqrt_recursion - This function returns the square root of a number
 *
 * @n: integer input
 *
 * Return: square root of a number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (calculate_sqrt(n, 2));
	}
}
