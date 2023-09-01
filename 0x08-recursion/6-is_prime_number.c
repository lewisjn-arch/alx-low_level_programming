#include "main.h"

int _prime(int n, int i);

/**
 * is_prime_number - This fucntion identifies a prime number
 *
 * @n: number to evaluate
 *
 * Return: 1 if n is a prime number, 0 if not a prime number
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (_prime(n, n - 1));
}

/**
 * _prime - this number recursively identifies a prime number
 *
 * @n: number to check
 * @i: iterator
 *
 * Return: 1 if n is prime and 0 if it is not a prime number
 */

int _prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (_prime(n, i - 1));
}
