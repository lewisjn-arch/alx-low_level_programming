#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Calculate the sum of a variable number of parameters.
 * @n: The number of parameters to sum.
 * @...: The parameters to calculate the sum of.
 *
 * Return: If n is 0, return 0.
 *         Otherwise, return the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
