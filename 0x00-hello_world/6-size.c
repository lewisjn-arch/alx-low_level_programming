#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point of the programme
 *
 * Description: This programme prints the size of data types
 *
 * Return: Always returns 0 to mean test case passes
 */

int main(void)
{
	char c;
	int num;
	long int number;
	long long int numbersLong;
	float decimal;

	printf ("Size of char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf ("Size of int: %lu byte(s)\n", (unsigned long)sizeof(num));
	printf ("Size of long int: %lu byte(s)\n", (unsigned long)sizeof(number));
	printf ("Size of long long int: %lu byte(s)\n", (unsigned long)sizeof(numbersLong));
	printf ("Size of float: %lu byte(s)\n", (unsigned long)sizeof(decimal));
	return (0);
}
