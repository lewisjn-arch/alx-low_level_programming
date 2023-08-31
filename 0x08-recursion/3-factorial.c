#include "main.h"

/**
 * factorial - This function returns the factorial of a number
 *
 * @n: The number input
 *
 * Return: The factorial of a number
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return 1;
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
