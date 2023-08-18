#include "main.h"
#include <stdio.h>

/**
 * _fizzBuzz - This function checks for digits divisible by 3 and 5
 *
 * Return: Always 0 to mean test case passes
 */

int _fizzBuzz(void)
{
	int i;
	for (i = 0; i <= 100; i++)
	{
		if (i % 15 == 0)
			_putchar ("FizzBuzz");
		else if (i % 3 == 0)
			_putchar ("Fizz");
		else if (i % 5 == 0)
			_putchar ("Buzz");
		else
			_putchar (i);
	}
	return (0);
}
